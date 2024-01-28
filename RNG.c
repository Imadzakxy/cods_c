#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rng1() {
    const int max = 8, min = 0;
    int nombre1 = (rand() % (max - min + 1)) + min;
    return nombre1;
}
void rng2(int *nombre2) {
    const int max = 8, min = 0;
    *nombre2 = (rand() % (max - min + 1)) + min;
}
int main() {
    //est appelé une seule fois au début de votre programme pour initialiser le générateur de nombres aléatoires
    srand(time(NULL));
    //avec int
    int nombrel = rng1();
    printf("le chiffre est: %d\n",nombrel);
    //avec void
    int nombre2;
    rng2(&nombre2);
    printf("le chiffre est: %d\n",nombre2);
    return 0;
}
