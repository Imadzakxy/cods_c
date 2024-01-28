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

int rng(int min,int max) {
    int rng;
    rng=(rand()%(max-min+1))+min;
    return rng;
}

void teamfight(char* teams[],int numTeams){
    if (numTeams % 2 != 0) {
      teams[numTeams] = "Dummy";
      numTeams++;
    }
    int n = numTeams;
    int rounds = n - 1;
    for (int roundNum = 1; roundNum <= rounds; roundNum++){
        printf("Round %d:\n", roundNum);
       for (int i = 0; i < n / 2; i++){
            char* team1 = teams[i];
            char* team2 = teams[n - 1 - i];
            if (strcmp(team1,"Dummy") != 0 && strcmp(team2,"Dummy") != 0){
                printf("%s vs %s\n", team1, team2);
                printf("Results are %d - %d\n",rng(0,8),rng(0,8));
            }
       }
    }
    char* temp = teams[1];
    for (int i= 1; i < n - 1; i++){
        teams[i] = teams[i + 1];
    }
    teams[n - 1] = temp;
}

int main(){
    int numt;
    do{
        printf("chh7al taha ma equipes:");
        scanf("%d",&numt);
    }while(numt<0);
    char* teams[numt+2];
    for (int i=0;i<numt; i++){
        printf("equipe num %d:",i + 1);
        scanf("%s",&teams[i]);
    }
    int numTeams = sizeof(teams)/sizeof(teams[0]);
    for(int i=0;i<numt;i++){
        printf("equipe %d:%s\n",i+1,teams[i]);
    }
    teamfight(teams[numt],numTeams);
    srand(time(NULL));
    return 0;
}
