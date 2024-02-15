#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int n;

void inp_n(){
         do{
                 printf("donne le chiffre n:");
                 while(scanf("%d",&n)!=1){
                        scanf("%*s");
                        printf("erreur.\ndonne le chiffre n:");
                 }
          }while(n<0);
}

int fact(int n){
         int f=1;
         if(n!=0){
            for(int i=1;i<=n;i++){
                f=f*i;
            }
         }
         else{
             f=1;
         }
         return f;
}
int fct(int n){
     if(n==0 || n==1){
        return 1;
     }
     else{
          return n*fct(n-1);
     }
}

int sn(int n){
        int s=0;
        if(n>1){
            for(int i=1;i<=n;i++){
                s=s+i;
            }
        }
        else{
             s=n;
        }
        return s;
}

int Sn(int n){
        int S=n*(n+1)/2;
        return S;
}

int A,B;

void valeur(){
     do{
                 printf("entrez la valeur de A:");
                 while(scanf("%d",&A)!=1){
                        scanf("%*s");
                        printf("erreur.\nentrez la valeur de A:");
                 }
          }while(A<0);
     do{
                 printf("entrez la valeur de B:");
                 while(scanf("%d",&B)!=1){
                        scanf("%*s");
                        printf("erreur.\nentrez la valeur de B:");
                 }
          }while(B<0);
}

void signe(){
     if(A*B>0)
        printf("%d et %d on le meme signe\n",A,B);
     else if (A*B==0)   
        printf("(un/les deux) neutre\n");
     else
        printf("%d et %d on des dignes differents\n",A,B);
}

int maximum(){
     int max;
     if (A<B)
         max= B;
     else
         max= A;
     return max;    
}

int minimum(){
     int min;
     if (A>B)
         min=B;
     else
         min=A;
     return min;
}

float power(float x,int n){
     float p;
     p=pow(x,n);
     return p;
}

float puissance(float x,int n){
     float p=1;
     for(int i=1;i<=n;i++){
         p=p*x;
     }
     return p;
}

int nom(int n){
    int s=0;
    int tmp;
    while (n != 0) {
        tmp=n%10; 
        if (tmp % 2 == 0) {
            s++;
        }
        n = n / 10; 
    }
    return s;
}

//avec (%) et (/)
int r_div1(int A,int B){
      int r1=A%B;
      return r1;
}
float q_div1(int A,int B){
       float q1=(float)A/B;
       return q1;
}

//sans (/) et (%)
struct r_q_div1{
       int r2;
       int q2;
};
struct r_q_div1 r_q_div(int A,int B){
     struct r_q_div1 resulta;
     if (B > A) {
        resulta.q2= 0;
        resulta.r2= A;
     }
     else {
        while (resulta.r2 >= B) {
            resulta.r2=resulta.r2 - B;
            resulta.q2++; 
        }
     }
     return resulta;
}

void afficher(){
          printf("[calculer factorielle]\n");
          inp_n();
          printf("%d! : %d",n,fact(n));
          printf("\n------------------------\n");
          printf("[calculer le factorielle methode de fonction recursive]\n");
          printf("%d!:%d",n,fct(n));
          printf("\n------------------------\n");
          printf("[calculer Sn]\n");
          inp_n();
          if(n>1){
          printf("sn=1+...+%d : %d",n,sn(n));
          printf("Sn=1+...+%d : %d",n,Sn(n));
          }
          else{
          printf("sn:%d\nSn:%d",sn(n),Sn(n));
          }
          
          printf("\n------------------------\n");
          
          printf("[calculer max min de A et B]\n");
          valeur();
          signe(A,B);
          printf("le plus petit est:%d\n",minimum(A,B));
          printf("le plus grand est:%d",maximum(A,B));
          
          printf("\n------------------------\n");
          
          printf("[calculer x^n]\n");
          float x;
          do{
                 printf("donne le chiffre (reel) x:");
                 while(scanf("%f",&x)!=1){
                        scanf("%*s");
                        printf("erreur.\ndonne le chiffre (reel)x:");
                 }
          }while(x<0);
          inp_n();
          printf("la puissance %.2f^(%d) est:%.2f\n",x,n,power(x,n));
          printf("la puissance %.2f^(%d) est:%.2f\n",x,n,puissance(x,n));
          
          printf("\n------------------------\n");
          
          printf("[calculer le nombrede chiffre pairs dans n]\n");
          inp_n();
          printf("Le nombre de chiffres pairs dans %d est : %d\n", n, nom(n));
          
          printf("\n------------------------\n");
          
          printf("[calculer reste et quotient A et B]");
          //valeur();
          do{
                 printf("entrez la valeur de A:");
                 while(scanf("%d",&A)!=1){
                        scanf("%*s");
                        printf("erreur.\nentrez la valeur de A:");
                 }
          }while(A<0);
          do{
                 printf("entrez la valeur de B:");
                 while(scanf("%d",&B)!=1){
                        scanf("%*s");
                        printf("erreur.\nentrez la valeur de B:");
                 }
          }while(B<=0);
          struct r_q_div1 resulta = r_q_div(A,B);
          printf("en utilisant (/) et (%):\n");
          printf("reste(%d/%d):%d\nquotient(%d/%d):%.2f\n",A,B,r_div1(A,B),A,B,q_div1(A,B));
          printf("snas utilisent (/) et (%):\n");
          printf("reste(%d/%d):%d\nquotient(%d/%d):%d\n",A,B,resulta.r2,A,B,resulta.q2);
}

int main(){
        afficher();
    return 0;
}
