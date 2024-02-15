#include<stdio.h>
#include<string.h>

void swap(char *a, char *b) {
    char tmp = *a;
    *a = *b;
    *b = tmp;
}

char* inverse(char *x){
    int n = strlen(x);
    static char tmp[100];
    int i;
    for(i = 0; i < n; i++) {
        tmp[i] = x[n - 1 - i]; 
    }
    tmp[i] = '\0'; 
    return tmp;
}

void inversement(char *y) {
    int n = strlen(y)-1;
    for(int i = 0; i <=n / 2; i++) {
        swap(&y[i], &y[n - i]); 
    }
}

int main() {
    printf("[Inversement de deux char]\n");
    char x, y;
    printf("entrez le char x : ");
    scanf(" %c", &x);
    getchar();
    printf("entrez le char y : ");
    scanf(" %c", &y);
    getchar();
    printf("avant permutation : x = %c, y = %c\n", x, y);
    swap(&x, &y);
    printf("apres permutation : x = %c, y = %c\n", x, y);
   
    printf("\n------------------------\n");
  
    printf("[Inversement d'une chaine de char]\n");
    char str[100]; // Déclarer str comme un tableau de caractères
    printf("entrez la première chaine de char x: ");
    scanf("%s", str);
    printf("sans utiliser swap : %s\n", inverse(str));
    printf("en utilisant swap:");
    inversement(str);
    printf("%s\n", str);
    return 0;
}
