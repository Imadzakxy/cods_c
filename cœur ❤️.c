#include<stdio.h>
#include<stdlib.h>
#include <windows.h>
void setConsoleColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
int main(){
    setConsoleColor(12);
       int j=0;
       int a,b,c,k;
       a=3;
       b=8;
       c=13;
       k=18;
       printf("\n");
       for(int i=0;i<=3;i++){
            j=0;
            while(j<=20){
                 if( (j>a&&j<b) || (j>c&&j<k) ){

                 printf("*");
                 }
                 else {
                 printf(" ");
                 }
                 j++;
            }
            printf("\n");
            a--;
            b++;
            c--;
            k++;
       }
       int d=0;
       int f=21;
       for(int i=0;i<=11;i++){
            j=0;
            while(j<22){
               if(j<d||j>f){
                  printf(" ");
               }
               else if(j>=d && j<=f){

                    printf("*");
               }
               j++;
            }
            printf("\n");
            f--;
            d++;
       }
     setConsoleColor(15);
   return 0;
}
