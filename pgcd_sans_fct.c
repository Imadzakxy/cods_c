#include<stdio.h>
#include<math.h>
#include<stdbool.h>
void lower(char *ch){
   if(*ch>='A'&&*ch<='Z'){
      *ch+=('a'-'A');
   }
}
int main()
{
    int a,b,max,p;
    char r;
    bool op=true;
    while(op){
    do{
       printf("le premier chiffre:");
       while(scanf("%d",&a)!=1){
          scanf("%*s");
          printf("erreur.\n1er chiffre:");
       }
    }while(a<0);
    do{
       printf("le deuxième chiffre:");
       while(scanf("%d",&b)!=1){
          scanf("%*s");
          printf("erreur.\n2eme chiffre:");
       }
    }while(b<0);
    if(a>b){
          max=a;
    }
    else{
          max=b;
    }
    p=0;
    for(int i=0;i<max;i++){
       if(a%i==0&&b%i==0){
              p=i;
       }
    }
    printf("le pgcd est:%d\n",p);
    do{
    printf("voulez vous continuer:(y/n)");
    scanf("%s",&r);
    lower(&r);
    }while(r!='n'&& r!='y');
    if(r=='n'){
          printf("a biento");
          op=false;
    }
    return 0;
}
