#include<stdio.h>
#include<stdbool.h>
void lower(char *ch){
   if(*ch>='A'&&*ch<='Z'){
      *ch+=('a'-'A');
   }
}
int main(){
    int t,h,m,s,r;
    char c;
    bool op=true;
    while (op){
    do{
        printf("entrer la duree en seconde :");
        while(scanf("%d",&t)!=1){
           scanf("%*s");
           printf("essaye encore...\n");
           printf("entrer la duree en seconde :");
        }
    }while(t<0);
    h=t/3600;
    r=t%3600;
    m=r/60;
    s=r%60;
    printf("le temps est de :%d h %d min %d sec\n",h,m,s);
    do{
       printf("voulez vous continuer:(y/n)");
       scanf("%s",&c);
       lower(&c);
    }while(c!='n'&&c!='y');
       if(c=='n'){
          printf("a biento");
          op=false;
       }
    }
    return 0;
}
