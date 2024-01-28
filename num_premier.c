#include<stdio.h>
#include<math.h>
int main()
{
     int n,s;
     do{
       printf("donne le chiffre:");
       while(scanf("%d",&n)!=1){
          scanf("%*s");
          printf("erreur.\donne le chiffre:");
       }
     }while(n<0);
     s=1;
     for(int i=2;i<= sqrt(n);i++){
       if (n%i==0){
          s=0;
          break;
       }
     }
     if (s==1)
           printf("premier");
     else
           printf("pas premier");
     return 0;
}
