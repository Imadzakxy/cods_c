#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp; // Utilisez FILE pour cree un fichier
    fp = fopen("nom_f.txt", "w"); // Ouvrez le fichier en mode écriture "w"/cnn utiliser "a" to add

    if (fp == NULL) {
        // Gérez l'échec de l'ouverture du fichier
        printf("Erreur lors de l'ouverture du fichier.\n");
        return 1; // Code d'erreur
    }

    fprintf(fp, "hi \n");//vous entrer le texte que vous voulez enregistrer a partir du terminal
    fputs("du text", fp);

    fclose(fp); // Fermez le fichier après utilisation

    return 0;
}
