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
         while(scanf("%c",&k)!=EOF){
            
         if(k>='a'&&k<='z'){
             if(h==1){
              
              word++;
              h=0;
             }
             
             p[i]=k;
             i++;
         } 
         else if(k>='A' && k<='Z'){
           
            
            
             k = k+32;
             p[i] = k;
             i++;
         }
         else if((k==' '||k==',' || k=='.')&& strlen(p)!=0){ //kol od le yardnu shura
          h=1;
        

         
    root=doTree(root,p);    
    i=0; //neathel caunter mehadash
   
    memset(p,0,strlen(p));//meathelet mehadash et p
         }
    }
    }
    
    print_r(root,p,0);
    //p meupas po
   
        
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
          else if((k==' '||k==',' || k=='.')&& strlen(p)!=0){
    root=doTree(root,p);    
    i=0;
    memset(p,0,strlen(p));
         }
         
    }
     display(root,p,0);
     
}

 
    dofree(root);

  
    return 0;
}

 
    


 
    


    



