#include<stdio.h>
#include<time.h>
#include<stdbool.h>
void lower(char *ch){
   if(*ch>='A'&&*ch<='Z'){
      *ch+=('a'-'A');
   }
}
int main(){
   int a,b,c,n;
   char r;
   bool op=true;
   while(op){
   printf("Un nombre egal a la somme de ses diviseurs propres est parfait.\n");
   printf("Un diviseur propre est un diviseur autre que le nombre lui-même.");
   printf("\n\t\t*som(divisurs)= le chiffre*");
   printf("\nenter le chiffre:");
   while(scanf("%d",&n)!=1){
             scanf("%*s");
             printf("erreur.\nenter le chiffre:");
         }
   a=1;
   for(int i=2;i<n;i++){
      b=n%i;
      if(b==0){
         a=a+i;
      }
   }
   if(a==n){
     printf("oui,le numero est parfait");
   }
   else{
        printf("no,le numero n'est pas parfait");
   }
   do{
    printf("\nvoulez vous continuer:(y/n)");
    scanf("%s",&r);
    lower(&r);
    }while(r!='n'&& r!='y');
    if(r=='n'){
          printf("a biento");
          op=false;
    }
   }
   return 0;
}
