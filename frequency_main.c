#define NUM_LETTERS 26
#include <stdbool.h> //sifria le bulianim
#include "countWords.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


//zarih lispor oreh mila gam 
//lishloah string zmani she yahnis oto le linked list
int main(int argc, char* argv[])
{
    char p[256];
    char k;
    int i=0;
    node* root = NULL;
    root=NewNode(root);
    if(argc == 2 && *(argv[1]) == 'r'){
         while((k=getchar())!=EOF){
            
         if(k>='a'&&k<='z'){
             p[i]=k;
             i++;
         } 
         else if(k>='A' && k<='Z'){
             k = k+32;
             p[i] = k;
             i++;
         }
         else { //kol od le yardnu shura
         

         
    root=doTree(root,p);    
    i=0; //neathel caunter mehadash
    memset(p,0,strlen(p));//meathelet mehadash et p
         }
    }
    }
     print_r(root,p,0);
    //dofree(root);
        
     if (argc == 1){
    while((k=getchar())!=EOF){
         if(k>='a'&&k<='z'){
             p[i]=k;
             i++;
         } 
        else if(k>='A' && k<='Z'){
             k = k+32;
             p[i] = k;
             i++;
         }
         else {
    root=doTree(root,p);    
    i=0;
    memset(p,0,strlen(p));
         }
    }
     display(root,p,0);
}

    
    //dofree(root);
     
    //display(root,str,level);

    else
    { 
        printf("Something went wrong with the arguments\n");
    }
    dofree(root);
    return 0;
}

 
    

    


    



