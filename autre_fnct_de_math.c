#include<stdio.h>
#include<string.h>
#include<math.h>

void valeur(int *a, int *b) {
    do {
        printf("le premier chiffre:");
        while(scanf("%d",a) != 1) {
            scanf("%*s");
            printf("erreur.\nle premier chiffre:");
        }
    } while(*a < 0);

    do {
        printf("le deuxieme chiffre:");
        while(scanf("%d",b) != 1) {
            scanf("%*s");
            printf("erreur.\nle deuxieme chiffre:");
        }
    } while(*b < 0);
}

int ppcm(int a,int b) {
    int tmp1=a,tmp2=b;
    while(tmp1!=tmp2) {
        if(tmp1>tmp2) {
            tmp2+=b;
        }
        else {
            tmp1+=a;
        }
    }
    //tmp1=tmp2=ppcm;
    return tmp1;
}

int pgcd1(int a, int b) {
    if (b == 0){
        return a;
    }    
    else{
        return pgcd1(b, a % b);
    }
}

int pgcd2(int a, int b) {
    int p, max;
    if(a > b) {
        max = a;
    }
    else {
        max = b;
    }    
    if(a!=0&&b!=0){
         p = 1;
        for(int i = 1; i <=max; i++) {
             if(a % i == 0 && b % i == 0) {
                 p = i;
             }
        }
    }
    else{
        p=max;
    }
    return p;
}

void inp_n(int *n){
    do {
        printf("donnez la taille du tableau[n]:");
        // n snas & inp_n(&n)->(&*n)
        while(scanf("%d",n)!=1) {
            scanf("%*s");
            printf("erreur.\ndonne le chiffre n:");
        }
    } while(*n<=2 && *n>=50);
}

int main() {
    int a, b;
    printf("[calculer pgcd et ppcm de (a/b)]\n");
    valeur(&a, &b);
    printf("le pgcd(%d,%d):%d\nle ppcm(%d,%d):%d\n",a,b,pgcd1(a, b),a,b,ppcm(a,b));
    printf("\n*******\n");
    valeur(&a, &b);
    printf("le pgcd(%d,%d):%d\nle ppcm(%d,%d):%d", a,b,pgcd2(a,b),a,b,ppcm(a,b));
    printf("\n------------------------\n");
    printf("[trouver les peres premieres]\n");
    int n;
    inp_n(&n);
    int tab[n];
    for(int i=0; i<n; i++) {
        printf("lelement %d:",i+1);
        scanf("%d",&tab[i]);
    }
    printf("les peres premieres:\n");
    for (int i = 0; i < n-1; i++) {
             for(int j=i+1;j<n;j++){
                 if(pgcd2(tab[i],tab[j])==1){
                     printf("(%d-%d)\n",tab[i],tab[j]);
                 }
            }
    }       
    return 0;
}
