#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>
void lower(char *ch){
   if(*ch>='A'&&*ch<='Z'){
      *ch+=('a'-'A');
   }
}
struct etuds{
            char nom[20];
            char p_nom[20];
            int matr;//matricule
            char sec;
            int grp;
            float note;
};

int main(){
     int n;
     bool op=true;
     do{
       printf("Entrer le nombre d'etudiants :");
       while (scanf("%d", &n) != 1) {
        scanf("%*s");
        printf("Erreur. Veuillez entrer un nombre entier : ");
       }
     }while(n<1);
     struct etuds info[n];
     for(int i=0;i<n;i++){
            printf("\netudiant numero %d:\n",i+1);
            printf("nom:");
            scanf("%s",info[i].nom);
            printf("prenom:");
            scanf("%s",&info[i].p_nom);
            printf("matricule:");
                while(scanf("%f",&info[i].matr)!= 1) {
                   scanf("%*s");
                   printf("Erreur.\nmatricule:");
                }
            while(op){
               printf("section:");
               scanf("%s",&info[i].sec);
               lower(&info[i].sec);
               if(info[i].sec=='a' || info[i].sec=='b' || info[i].sec=='c'){
                   break;
               }
            }
            do{
                 printf("groupe:");
                  while (scanf("%d",&info[i].grp) != 1) {
                 scanf("%*s");
                 printf("Erreur.");
                }
            }while(info[i].grp<0 && info[i].grp>5);
            do{
               printf("note S1:");
                while (scanf("%f",&info[i].note) != 1) {
                 scanf("%*s");
                 printf("Erreur.\nnote:");
                }
            }while(info[i].note<0);
     }
   return 0;
}
