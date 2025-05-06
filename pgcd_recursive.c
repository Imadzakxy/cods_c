#include<stdio.h>
#include<stdbool.h>
void lower(char *ch){
   if(*ch>='A'&&*ch<='Z'){
      *ch+=('a'-'A');
   }
}
int pgcd(int a,int b){
   if (b==0)
     return a;
   else
     return pgcd(b,a%b);
   }
int main()
{
    int a,b;
    char r;
    bool op=true;
    while (op){
    do{
       printf("le premier chiffre:");
       while(scanf("%d",&a)!=1){
           scanf("%*s");
           printf("erreur.\n1er chiffre:");

       }
    }while(a<0);
    do{
       printf("le deuxieme chiffre:");
       while(scanf("%d",&b)!=1){
          scanf("%*s");
          printf("erreur.\n2eme chiffre:");
       }
    }while(b<0);
    printf("le pgcd est:%d\n",pgcd(a,b));
    do{
       printf("voulez vous continuer:(y/n)");
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
