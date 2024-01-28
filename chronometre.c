#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
int heur=0;min=0;sec=0;chekp=0;

void dele(s){
     clock_t temps= s + clock() ;
     while(temps > clock());
}
int conteur(){
    while(!kbhit() && chekp==0){
    if (min>59){
    min=0;
    ++heur;
    }
    if (sec>59){
    sec=0;
    min++;
    }
    conteAreb();
    dele(1000);
    sec++;
    }
    selection();
}
int selection(){
   switch(getchar()){
   case '1':
     chekp=0;
   break;
   case '2':
     chekp=1;
   break;
   case '3':
     heur=min=sec= 0;
     chekp=1;
   break;
   case '4':
     exit(0);
   break;
   }
}
int conteAreb(){
    system("cls");
    printf("\n1.start2.stop3.reset4.exit\n");
    printf("**********************\n");
    printf("      %d:%d:%d",heur,min,sec);
    printf("\n**********************\n\n");
}
int main()
{
   while(1){
   conteur();
   }
   return 0;
}
