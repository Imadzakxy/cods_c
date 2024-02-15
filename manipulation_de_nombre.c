#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void inp_n(int *n){
         do{
                 printf("donne le num a 3 chiffre :");
                 while(scanf("%d",n)!=1){
                        scanf("%*s");
                        printf("erreur.\ndonne le num a 3 chiffre :");
                 }
          }while( *n>999|| *n<-999);
}


void swap(int n){
             int a,b,c,d;
             a=n;b=0;c=0;
             printf("------------------------\n");
             printf("%d,%d,%d\n",a,b,c);
             printf("------------------------\n");
             b=a/100;//1
             a=a-(b*100);//23
             printf("------------------------\n");
             printf("%d,%d,%d\n",a,b,c);
             printf("------------------------\n");
             d=a/10;
             d=d*10;
             c=a/10;
             a=a-d;//3. 2  1
             printf("------------------------\n");
             printf("%d,%d,%d\n",a,b,c);
             printf("------------------------\n");
             a=a+(b*10);//13
             b=c;//2
             c=0;//0
             printf("------------------------\n");
             printf("%d,%d,%d\n",a,b,c);
             printf("------------------------\n");
             d=a/10;
             d=d*10;
             b=b+d;
             a=a-d;
             printf("------------------------\n");
             printf("%d,%d,%d\n",a,b,c);
             printf("------------------------\n");
             c=a;
             a=b/10;
             b=b-(a*10);
             printf("------------------------\n");
             printf("%d,%d,%d\n",a,b,c);
             printf("------------------------\n");
             c=b*10+c;
             b=0;
             printf("------------------------\n");
             printf("%d,%d,%d\n",a,b,c);
             printf("------------------------\n");
             c=a*100+c;
             a=0;
             printf("------------------------\n");
             printf("%d,%d,%d\n",a,b,c);
             printf("------------------------\n");
}


void afficher(){
          int n;
          inp_n(&n);
          swap(n);
          
}

int main(){
        afficher();
    return 0;
}
