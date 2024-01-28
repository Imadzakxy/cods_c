#include<stdio.h>
#include<stdbool.h>
void lower(char *ch){
   if(*ch>='A'&&*ch<='Z'){
      *ch+=('a'-'A');
   }
}
int main()
{
   int a,f,n;
   char r;
   bool op=true;
   while (op){
      do{
        printf("num:");
        while(scanf("%d",&n)!=1){
          scanf("%*s");
          printf("erreur.\nnum:");
        }
      }while(n<0);
      f=0;
      while(n!=0){
         a=n%10;
         n=n/10;
         f=a+(f*10);
      }
      printf("linverse:\n");
      printf("%d",f);
      do{
        printf("\nvoulez vous continuer:(y/n)");
        scanf("%s",&r);
        lower(&r);
      }while(r!='n'&&r!='y');
      if(r=='n'){
           printf("a biento");
           op=false;
      }
   }
   return 0;
}
