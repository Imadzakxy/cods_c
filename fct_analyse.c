#include<stdio.h>
#include<string.h>
#include<math.h>

void inp_n(int *n){
    do {
        printf("donnez le num n:");
        while(scanf("%d",n)!=1) {
            scanf("%*s");
            printf("erreur.\ndonnez le num n:");
        }
    } while(*n<0);
}

int miroir(int n){
      int result=0,tmp;
      while(n!=0){
          tmp=n%10;
          n=n/10;
          result=tmp+(result*10);
      }
      return result;
}
void p_ent1(){
        float x;
        printf("methode 1:\n");
        printf("donnez le réel x:");
        while(scanf("%f",&x)!=1) {
               scanf("%*s");
               printf("erreur.\ndonnez le réel x:");
        }
        printf("la partie entiere:%d\nla partie fractionelle:%f\n",(int)x,(float)(x-(int)x));
}
void p_ent2(){
        float x;
        printf("methode 2:\n");
        printf("donnez le réel x:");
        while(scanf("%f",&x)!=1) {
               scanf("%*s");
               printf("erreur.\ndonnez le réel x:");
        }
        printf("la partie entiere:%.0f\nla partie fractionelle:%f",floor(x),virg(x));//floor et roundf de math.h
}

void e_sci(){
        float x;
        printf("donnez le réel x:");
        while(scanf("%f",&x)!=1) {
               scanf("%*s");
               printf("erreur.\ndonnez le réel x:");
        }
        if(x>10){
               while(x>10){
                      x=x/10;
               }
        }
        else{
               //pour les chiffres négatifs il ya abs dans la bibliothèque math.h donne |x|
               while(abs(x)<1){
                    x=x*10;
               }
        }
        printf("ecriture scientifique:%f\n",x);
}

void Fexpo(){
        float x;
        int n=0;
        do{ 
               printf("donnez le réel x:");
               while(scanf("%f",&x)!=1) {
                       scanf("%*s");
                       printf("erreur.\ndonnez le réel x:");
               }  
        }while(x<0||x>1);
        while(x - floor(x) !=0){
                x=x*10;
                n++;
        }
        printf("le num:%.0f\nla puissance:%d\n",x,n);
}

void inp_n2(int *n){
    do {
        printf("donnez la taille du tableau[n]:");
        fflush(stdin);
        // n snas & inp_n(&n)->(&*n)
        while(scanf("%d",n)!=1) {
            scanf("%*s");
            printf("erreur.\ndonne le chiffre n:");
            fflush(stdin);
        }
    } while(*n<=0 || *n>=50);
}

float virg(float x){
            float tmp;
            tmp=x-(int)x;
            return tmp;
}


int fexpo(float x){
         float tmp;
         tmp=(float)(x-(int)x);
         while(virg(tmp) > 0.00001){
                tmp=(roundf(tmp*10000)/10000)*10;
        }
        return (int)tmp;
}


int miroir2(float x){
      int result=0,tmp,n;
      n=((int)floor(x));
      while(n!=0){
          tmp=n%10;
          n=n/10;
          result=tmp+(result*10);
      }
      return result;
}
void arr(int n){
    inp_n2(&n);
    float tab[n];
    for(int i=0; i<n; i++) {
             printf("lelement %d:",i+1);
             while(scanf("%f",&tab[i])!=1) {
                   scanf("%*s");
                   printf("erreur.\ndonnez le réel %d:",i+1);
             }
    }    
    for(int i=0;i<n;i++){
           printf("/%d/%d",fexpo(tab[i]),miroir2(tab[i]));
        if(fexpo(tab[i])==miroir2(tab[i])){
            printf("le chiffre %f a une virgul miroir\n",tab[i]);
        }
    }
}

int main() {
    int n;
    printf("[calculer le miroir]\n");
    inp_n(&n);
    printf("le miroir:%d",miroir(n));
    printf("\n------------------------\n");
    printf("[calculer la partie entiere]\n");
    p_ent1();
    p_ent2();
    printf("\n------------------------\n");
    printf("[ecriture scientifique]\n");
    //j'avais mal compris la question (*3*)
    e_sci();
    printf("\n------------------------\n");
    printf("[calculer m et la puissance n]\n");
    Fexpo();
    printf("\n------------------------\n");
    printf("[voir si la partie entiere x = fractionelle x]\n");
    arr(n);
    return 0;
}
