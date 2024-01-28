#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void lower(char *ch) {
    if(*ch>='A' && *ch<='Z') {
        *ch +=('a' - 'A');
    }
}

int fact(int n){
    int f=1;
    for(int i=1;i<= n;i++) {
        f=f*i;
    }
    return f;
}

float apn(float a, int n){
    float an=1;
    for(int i=0;i<n;i++) {
        an=an*a;
    }
    return an;
}

int ipb(int n) {
    int pi=1;
    for(int i=1;i<=n;i++) {
        pi=pi*i;
    }
    return pi;
}

int main(){
    int b,n;
    float a,s;

    printf("Calculer f(a,b)=a*som(de i=0 a n)de[(i+1)**b/(i+1)!].a**n:\n");
    /*cette suite contient une fonction de factoriel et de puissance*/

    char r;
    bool op=true;

    while(op){
        do {
            printf("Le chiffre a:");
            while(scanf("%f",&a)!= 1){
                scanf("%*s");
                printf("Erreur.\nLe chiffre a:");
            }
        } while(a<0);
        do {
            printf("Le chiffre n: ");
            while(scanf("%d",&n) != 1) {
                scanf("%*s");
                printf("Erreur.\nLe chiffre n:");
            }
        }while(n<0);
        do{
            printf("Le chiffre b: ");
            while(scanf("%d", &b) != 1){
                scanf("%*s");
                printf("Erreur.\nLe chiffre b:");
            }
        }while (b<0);

        int f=fact(n);
        float an=apn(a, n);
        int pi=ipb(n);

        printf("a**n:%.2f\n",an);
        printf("(i+1)!:%d\n",f);
        printf("(i+1)**b:%d\n",pi);

        s=1.0; // Assurez-vous que s est un float
        for(int i=0;i<n;i++){
            s=s+((float)pi/f)*an;
        }
        s=a*s;
        printf("f(%.2f,%d)avec(n:%d):%.2f\n",a,b,n,s);
        do {
            printf("voulez-vous continuer ? (y/n) : ");
            scanf(" %c", &r);
            lower(&r);
        } while (r != 'n' && r != 'y');

        if (r == 'n') {
            printf("a bientôt.\n");
            op = false;
        }
    }
    return 0;
}

