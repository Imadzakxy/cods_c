#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

void lower(char *ch) {
    if (*ch >= 'A' && *ch <= 'Z') {
      *ch += ('a' - 'A');
    }
}

void say(char *str){
    for(int i=0;str[i]!='\0';i++){
        printf("%c",str[i]);
        usleep((20000));
    }
}

int rng(int min,int max) {
    return (rand()%(max-min+1))+min;
}


// colors
void red() {
  printf("\033[1;31m");
}
void blue() {
  printf("\033[1;34m");
}
void whiteBold() {
  printf("\033[1;37m");
}
void yellow() {
  printf("\033[1;33m");
}
void resetCLR() {
  printf("\033[0m");
}
void yellowNRM() {
    printf("\033[0;33m");
}
void redNRM() {
    printf("\033[0;31m");
}

void teamfight(char* teams[],int numTeams) {
    if((numTeams%2)!=0){
        teams = realloc(teams, (numTeams + 1) * sizeof(char*));
        teams[numTeams] = malloc(50 * sizeof(char));
        strcpy(teams[numTeams],"tmp");
        numTeams++;
    }
    whiteBold();
    printf("------------------------------\n");
    resetCLR();
    int score1;
    int score2;
    while(numTeams!=1){
     for(int i=0;i<numTeams-1;i++){
       if(strcmp(teams[i],"tmp")!=0 && strcmp(teams[i+1],"tmp")!=0){
          score1 = rng(0, 8);
          score2 = rng(0, 8);
          blue();
          printf("\t");
          say(teams[i]);
          say(" ");
          printf("%d",score1);
          resetCLR();
          whiteBold();
          say(" - ");
          resetCLR();
          blue();
          say(" ");
          printf("%d ",score2);
          say(teams[i+1]);
          printf("\n");
          resetCLR();
          whiteBold();
          printf("------------------------------\n");
          resetCLR();
          if(score1>score2){
            for (int j=i+1;j<numTeams-1;j++){
                strcpy(teams[j],teams[j+1]);
            }
            free(teams[numTeams-1]);
          }
          else{
            for (int j=i;j<numTeams-1;j++){
                strcpy(teams[j],teams[j+1]);
            }
            free(teams[numTeams-1]);
          }
          numTeams--;
       }

     }
     if(strcmp(teams[1],"tmp")==0){
            break;
     }
    }
    whiteBold();
    say("vinqueur:");
    resetCLR();
    yellow();
    printf("\n\t");
    say("+---------------------------------+");
    printf("\n\t\t\t");
    resetCLR();
    red();
    say(teams[0]);
    resetCLR();
    yellow();
    printf("\n\t"); say("+---------------------------------+");
    printf("\n");
    resetCLR();
}

void drawCup() {
    yellow();
    printf("      ===============");
    yellowNRM();
    printf("***************\n");
    yellow();
    printf("        -------------");
    yellowNRM();
    printf("============\n");
    yellow();
    printf("   ======------------");
    yellowNRM();
    printf("============>>>>>>\n");
    yellow();
    printf("  =======------------");
    yellowNRM();
    printf("============>>>>>>>\n");
    yellow();
    printf("   ==    -----------");
    printf("\033[1;36m>\033[0;36m[");
    yellowNRM();
    printf("===========    >>\n");
    yellow();
    printf("   ===   ----------");
    printf("\033[1;36m>>\033[0;36m[");
    yellowNRM();
    printf("===========   >>>\n");
    yellow();
    printf("    ==   -----------");
    printf("\033[1;36m>\033[0;36m[");
    yellowNRM();
    printf("==========   >>\n");
    yellow();
    printf("    ====  ----------");
    printf("\033[1;36m>\033[0;36m[");
    yellowNRM();
    printf("==========  >>>\n");
    yellow();
    printf("      === ----------");
    printf("\033[1;36m>\033[0;36m[");
    yellowNRM();
    printf("========== >>>\n");
    yellow();
    printf("       ====----------");
    yellowNRM();
    printf("==========>>>>\n");
    yellow();
    printf("         ==~---------");
    yellowNRM();
    printf("=========*>>\n");
    yellow();
    printf("            ~--------");
    yellowNRM();
    printf("========*\n");
    yellow();
    printf("              -------");
    yellowNRM();
    printf("=======\n");
    yellow();
    printf("                -----");
    yellowNRM();
    printf("====~\n");
    yellow();
    printf("                 ++++");
    yellowNRM();
    printf(">>>^\n");
    yellow();
    printf("                 ++++");
    yellowNRM();
    printf(">>>>\n");
    yellow();
    printf("                 ++++");
    yellowNRM();
    printf(">>>>\n");
    yellow();
    printf("              -------");
    yellowNRM();
    printf("=======\n");
    yellow();
    printf("             --------");
    yellowNRM();
    printf("========\n");
    resetCLR();
    red();
    printf("         ))))))))))))");
    redNRM();
    printf("}}}}}}}}}}}[         \n");
    red();
    printf("         <)))))))))))");
    redNRM();
    printf("}}}}}}}}}}}[         \n");
    resetCLR();
}

void affichage(){
    whiteBold();
    say("===(mini_jeu_foot)===");
    printf("\n");
    int numTeams;
    do{
      say("-num des equipes:");
      while(scanf("%d",&numTeams)!=1){
            scanf("%*s");
            say("erreur.\n-donnez un chiffre:");
      }
    }while(numTeams<0);
    char** teams=(char**)malloc(numTeams * sizeof(char*));
    if (teams == NULL) {
        say("Erreur d'allocation de memoire.");
        printf("\n");
        return 1;
    }
    for (int i=0;i<numTeams; i++){
        teams[i]=(char*)malloc(50 * sizeof(char));
        say("equipe num ");
        printf("%d",i+1);
        say(" :");
        scanf("%s",teams[i]);

    }
    resetCLR();
    teamfight(teams,numTeams);

    drawCup();

    free(teams);

}

int main(){
     srand(time(NULL));
     affichage();
    return 0;
}
