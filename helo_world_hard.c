#include <stdio.h>
#include <time.h>
int main() {
    char arr[] = "helo world";//vous pouveer chager le msg
    int taille=  sizeof(arr)/sizeof(arr[0]) - 1;
    char stock[50] = "";
    for(int i=0;i<taille;i++) {
        for (int a=32; a<= 126; a++) {
            fputs(stock,stdout);
            if (a == arr[i]) {
                stock[i] = a;
                printf("%c\n",a);
                break;
            } else {
                printf("%c\n",a);
            }
            // Ajouter un délai de 100 000 microsecondes (0.01 seconde)
            usleep(10000);
        }
   }
   return 0;
}
