#include <stdio.h>

void lecture_carac(void);

int main(void){
    // read two characters and show them in two lines.
    lecture_carac();
    return 0;
}

void lecture_carac(void){
    char char1;
    char char2;
    printf("Entrez le premier caractère : ");
    scanf(" %c", &char1);  // Ajout d'un espace pour ignorer les séparateurs

    printf("Entrez le deuxième caractère : ");
    scanf(" %c", &char2);  // Ajout d'un espace pour ignorer les séparateurs

    printf("* %c *\n", char1);
    printf("* %c *\n", char2);
}