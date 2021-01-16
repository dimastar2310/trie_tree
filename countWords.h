#ifndef FREQ_H
#define FREQ_H
#define NUM_LETTERS 26
//#include <stdlib.h>
typedef struct node //Declaring the struct node that we will use in our code.
{
 char letter;
 long count;
 struct node* children[NUM_LETTERS];
 bool p;
}node;
node* doTree(node* root,char *arr); 
void display(node* root,char str[],int level);
void insert(node* root,char ch[]);
node* NewNode(node *newNode);
void dofree(node* temp);
void print_r(node* root,char str[],int index);
void print( char arr[]);

#endif