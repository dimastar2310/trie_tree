#define NUM_LETTERS 26
#include <stdbool.h>//sifria le bulianim
#include "countWords.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

node* NewNode(node *newNode){
    newNode = (node*)malloc(sizeof(node));
        for(int i=0;i<NUM_LETTERS;i++){
        newNode->children[i]=NULL;
    }
    newNode->p=false;
    newNode->count = 0;
    
return newNode;
}
void insert(node* root,char ch[]){
    node* temp=root;
int i=0;
int size=strlen(ch);
while(i<size){
    int j=ch[i]-97;
    if(temp->children[j]==NULL){
        temp->children[j]=NewNode(temp);
    }
    temp=temp->children[j];
    i++;
}

if(temp->p!=true){
temp->p=true;
temp->count=1;
}
else{
temp->count++;
}

}

node* doTree(node* root,char arr[]){



insert(root,arr);
return root;
}

void print_r(node* root,char str[],int index){
    if(root->p==true){
        str[index]='\0';
        printf("%s %ld\n",str,root->count);
    }
    for(int i=NUM_LETTERS-1; i>=0;i--){
        if(root->children[i]!=NULL)
        {
        str[index]=i+97;
        print_r(root->children[i],str,index+1);
    }
    }
}

void print( char arr[])
{
    
    for(int i=0;i<strlen(arr) && arr[i]!=' '; i++){
    printf("%c",arr[i]);
    
    }
}

        
    

void display(node* root,char str[],int level)
{
    if(root->p==true)
    {
        str[level]='\0';
        print(str);
        printf(" %ld\n",root->count);
    }
    int i;
    for(i=0;i<NUM_LETTERS;i++)
    {
        if(root->children[i]!=NULL)
        {
            str[level]=i+97;
            display(root->children[i],str,level+1);
        }
    }
   
}
void dofree(node* temp){
    for(int i=0; i<NUM_LETTERS;i++){
        if(temp->children[i]!=NULL){
            dofree(temp->children[i]);
        }
    }
    free(temp);
}

