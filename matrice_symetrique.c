#include<stdio.h>
#include<string.h>
#include<math.h>

void inp_n(int *n){
    do {
        printf("donnez le nombre de colonnes:");
        while(scanf("%d",n)!=1) {
            scanf("%*s");
            printf("erreur.\ndonnez le nombre de colonnes:");
        }
    } while(*n>20);
}


void inp_m(int *m){
    do {
        printf("donnez le nombre de lignes:");
        // n snas & inp_n(&n)->(&*n)
        while(scanf("%d",m)!=1) {
            scanf("%*s");
            printf("erreur.\ndonnez le nombre de lignes:");
        }
    } while(*m>20);
}


int cal_sym(int m,int n){
            if(m==n){ 
                   return 1;
            }
            else{
               return 0;
            }
}

int symet(int a,int b,int mat[a][b]){
       for(int i=0;i<a;i++){
              for(int j=0;j<b;j++){
                    if(mat[i][j]!=mat[j][i]){
                           return 0;
                    }
              }     
       }       
       return 1;    
}


void sym(){
          int m,n;
          printf("------------------------\n");
          inp_m(&m);
          printf("------------------------\n");
          inp_n(&n);
          int M[m][n];
          printf("------------------------\n");
          if(cal_sym(m,n)==1){
                  printf("*la matrice est symetrique*\n");
          } 
          else{ 
                   printf("*la matrice n'est pas symetrique*\n");
          }
          for(int i=0;i<m;i++){
                  for(int j=0;j<n;j++){
                       printf("la valeur M[%d,%d]:",i,j);
                       while(scanf("%d",&M[i][j])!=1) {
                             scanf("%*s");
                             printf("erreur.\nla valeur M [%d,%d]:",i,j);
                       }
                  }
          }
          if(symet(m,n,M)==1){
                printf("*la matrice symetrique*\n");
          }
          else{
               printf("*la matrice n'ai pas symetrique*\n");
          }
          printf("les M[i,j] qui ne se repetent pas:\n");
          int s=0;
          for(int i=0;i<m;i++){
                 for(int j=0;j<n;j++){
                      s=0;
                      for(int a=0;a<m;a++){
                             for(int b=0;b<n;b++){
                                    if(M[i][j]==M[a][b]){
                                      s++;
                                      break;
                                    }
                             }
                      }       
                     if(s==1){
                           printf("M[%d,%d]:%d\n",i,j,M[i][j]);
                     }             
                 }    
          }
}

int main() {
    int n;
    printf("[verifier si unr matrice est symetrique]\n");
    sym();
    return 0;
}
