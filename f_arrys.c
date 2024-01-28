#include<stdio.h>
#include<time.h>
#include<stdbool.h>
void lower(char *ch){
   if(*ch>='A'&&*ch<='Z'){
      *ch+=('a'-'A');
   }
}
int main(){
   //////////////////////
   int n,max,min,add,sou;
   char r;
   //////////////////////
   bool op=true;
   while(op){
   do{
         printf("combien de chiffre tu vas donner(n<=100):");
         while(scanf("%d",&n)!=1){
             scanf("%*s");
             printf("erreur.\ncombien de chiffre tu vas donner:");
         }
         if(n>100){
           printf("attention n<=100!\ndonner une autre valeur:");
         }
   }while(n<1||n>100);
   //////////////////////////////
   int array[n],T[n+1],P[n],N[n];
   //////////////////////////////
   for(int i=0;i<n;i++){
            printf("donner un num:");
            while(scanf("%d",&array[i])!=1){
              scanf("%*s");
              printf("erreur.\ndonner un num:");
            }
      //T[] pour ajouter une valeur dans un index précis
      T[i]=array[i];
      //déplacement des éléments négatifs au début
      N[i]=array[i];
   }
   max=array[0];
   min=array[0];
   for(int i=0;i<n;i++){
       if(max<array[i]){
        max=array[i];
       }
       else if(min>array[i]){
        min=array[i];
       }
   }
   printf("--------\n");
   printf("max:%d\n",max);
   printf("--------\n");
   printf("min:%d\n",min);
   printf("--------\n");
   add=0;
   sou=0;
   for(int i=0;i<n;i++){
        if(array[i]>=0){
            add=add+array[i];
        }
        else{
          sou=sou+array[i];
        }
   }
   printf("l'addition------->%d",add);
   printf("\nla soustraction-->%d\n",sou);
   //partie pour trouver  la répétition
   /////////////
   int count;
   ////////////
   for(int i=0;i<n;i++){
       count=0;
       for(int j=0;j<n;j++){
         if(array[i]==array[j]){
              count++;
         }
       }
       printf("le numero | %d | a etait taper | %d | fois\n",array[i],count);
   }
   //l'ordre inverse
   printf("-----------------------------------\n");
   printf("les chiffre dans l'ordre inverse:\n");
   printf("-----------------------------------\n");
   for(int i=n-1;i>=0;i--){
      printf("\n%d",array[i]);
   }
   //ajouter une val à array
   /////////////////////
   int ind,c;
   ////////////////////
   do{
      printf("\ndonner l'index de 0>=ind>n :\n");
      while(scanf("%d",&ind)!=1){
              scanf("%*s");
              printf("erreur.\nindex:");
      }
   }while(ind<0 || ind>n);
   printf("\nle chiffre que vous voulez ajouter:\n");
   scanf("%d",&c);
   for(int i=n+1;i>ind;i--){
       T[i]=T[i-1];
   }
   T[ind]=c;
   printf("---------------------------\n");
   printf("le tableau apparait ajout:\n");
   printf("---------------------------\n");
   //affichage
   for(int i=0;i<n+1;i++){
      printf("%d\n",T[i]);
   }
   //enlever les chiffres null
   printf("------------------------------\n");
   printf("le tableau sans element null:\n");
   printf("------------------------------\n");
   /////////
   int x,y=n;
   /////////
   for(int i=0;i<y+1;i++){
     if(T[i]==0&&T[y]==0){
      T[i]=T[i+1];
      T[i+1]=T[y];
      y--;
     }
     else if(T[i]==0&&T[y]!=0){
      x=T[y];
      T[y]=T[i];
      T[i]=x;
      y--;
     }
     else if(T[y]==0&&T[i]!=0){
      y--;
     }
   }
   for(int i=0;i<y+1;i++){
        printf("%d\n",T[i]);
   }
   // ajouter N[n];
   printf("-----------------------------------------------\n");
   printf("le tableau avec les element negatifs au debut:\n");
   printf("------------------------------------------------\n");
   ///////////
   int b;
   //////////
   for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        if(N[i]<N[j]){
           b=N[j];
           N[j]=N[i];
           N[i]=b;
        }
      }
   }
   //affichage
   for(int i=0;i<n;i++){
       printf("%d\n",N[i]);
   }
   printf("\n--------------\n");
   do{
    printf("voulez vous continuer:(y/n)");
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
