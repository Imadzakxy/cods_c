#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp; // Utilisez FILE pour cree un fichier
    fp = fopen("nom_f.txt", "w"); // Ouvrez le fichier en mode �criture "w"/cnn utiliser "a" to add

    if (fp == NULL) {
        // G�rez l'�chec de l'ouverture du fichier
        printf("Erreur lors de l'ouverture du fichier.\n");
        return 1; // Code d'erreur
    }

    fprintf(fp, "hi \n");//vous entrer le texte que vous voulez enregistrer a partir du terminal
    fputs("du text", fp);

    fclose(fp); // Fermez le fichier apr�s utilisation

    return 0;
}
