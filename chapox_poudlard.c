#include<stdio.h>
#include<ctype.h>
int main()
{
     char questions[][200]={"1.si quelqu'un se noyer le sauverez vous:",
                            "2.si quelqu'un vous manque de respect est ce que vous réagirez:",
                            "3.si vous travaillez sur un projet est échoue a plusieurs reprises abandonnerez vous:",
                            "4.on t'offre une promotion en échangeton ton amie se fera virait acceptera tu la promo:",
                            "5.tu aime découvrir de nouvelles régions:",
                            "6.tu aime les toure de majie et les ruses:", 
                            "7.etes vous déterminer a accomplir ce qui est impossible pour d'autres personnes"};
     /*
     {gryffondor 
     1--> courage
     2--> force d'esprit 
     }
     {poufsouffle 
     3-->patience
     4-->loyauté 
     }
     {secrdaigle
     5--> curiosité    
     }
     {serpentard 
     6-->russe
     7-->détermination 
     }
     */
     char options[][100]={"1.oui","2.non",/*1*/
                          "1.oui","2.non",/*2*/
                          "1.oui","2.non",/*3*/
                          "1.oui","2.non",/*4*/
                          "1.oui","2.non",/*5*/
                          "1.oui","2.non",/*6*/
                          "1.oui","2.non" /*7*/}; 
     /*les réponses*/
     char gryffondor [7]={'1','2','2','2','1','2','1'};
     char poufsouffle[7]={'1','1','2','2','2','2','2'};
     char secrdaigle [7]={'1','1','1','2','1','2','2'};
     char serpentard [7]={'2','1','2','1','2','1','1'};                           
     
     char reponse;
     int NombreDeQ = sizeof(questions)/sizeof(questions[0]);  
     printf("RÉPOND AUX QUESTIONS (1/2) \n");
     /*les questions de 1 a 6*/
     for(int i=0;i<NombreDeQ;i++)
     { 
              printf("*******************\n"); 
              printf("%s\n",questions[i]);
              printf("***************************************\n");
     /*les choix */
     for(int j=(i*2);j<(i*2)+2;j++)
             {printf("%s\n",options[j]);}
     /*les réponses*/
     do{
     printf("la réponse:");
     scanf("%s",&reponse);
     }while(reponse !='1' && reponse !='2' );
     /*partie de condition et la distribution des maisons*/
          if (reponse== gryffondor[i])printf("tu est un gryffondor");
     else{if (reponse==poufsouffle[i])printf("tu est un poufsouffle");
          if (reponse==secrdaigle[i]) printf("tu est un secrdaigle");
          if (reponse==serpentard[i]) printf("tu est un serpentard");}
     }
     return 0;
}