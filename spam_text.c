#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void lower(char *ch){
   if(*ch>='A'&&*ch<='Z'){
      *ch+=('a'-'A');
   }
}
int main(){
   int n;
   char c;
   bool option=true;
   while(option){
   do{
      printf("nombre de rep:");
      while(scanf("%d",&n)!=1){
        scanf("%*s");
        printf("erreur.\nn:");
      }
   }while(n<=0);
   for(int i=0;i<n;i++){
          printf("*text*");//changer *text*-> par le text;
          printf("\n");
   }
   do{
      printf("voulez vous continuer:(y/n)");
      scanf("%s",&c);
      lower(&c);
   }while(c!='y'&&c!='n');
   if(c=='n'){
      printf("a biento");
      option=false;
   }
   else{
      option=true;
   }
   }
   return 0;
}
