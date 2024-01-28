#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a,b,x,y,c,z;
     printf("combien de variableveuttu stocker dans RAM:\n");
     scanf("%d",&a);
     int* p1=malloc(a*sizeof(int));
     for(int i=0;i<a;i++){
     printf("num %d:",i+1);
     scanf("%d",&x);
     *(p1+i)=x;
     }
     printf("les vals :");
     for(int i=0;i<a;i++){
     printf("\n%d",*(p1+i));
     }
     printf("\nok veut tu stocker plus ou moins donner le chiffre:\n");
     scanf("%d",&b);
     int* p2=calloc(b,sizeof(int));
     for(int i=0;i<b;i++){
     printf("num %d:",i+1);
     scanf("%d",&y);
     *(p2+i)=y;
     }
     printf("\nles vals :\n");
     for(int i=0;i<b;i++){
     printf("%d\n",*(p2+i));
     }
     printf("\nvoulez vous ajouter du stockages réduire donner le chiffre:\n");
     scanf("%d",&c);
     p2=realloc(p2,c*sizeof(int) );
     if(c>b){
     for(int i=b;i<c;i++){
     printf("num %d:",i+1);
     scanf("%d",&z);
     *(p2+i)=z;
     }
     }
     printf("les vals :");
     for(int i=0;i<c;i++){
     printf("\n%d",*(p2+i));
     }
     return 0;
}