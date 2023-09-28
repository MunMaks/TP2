#include <stdio.h>

void ajoutDix(int *n);

void changeFonction(int *a, int *b);

void lecture_carac(int *number);


int main(void){
    int n, m;
    lecture_carac(&n);
    lecture_carac(&m);

    printf("n = %d est\n", n);
    // Fonction adds 10 to a variable n.
    ajoutDix(&n);

    printf("l'adress après ajoutDix de %d est %p\n", n, &n);

    printf("\nBefore changes: \nn = %d: %p\nm = %d: %p\n", n, &n, m, &m);
    // Fonction changes values of two variables by their adress.
    changeFonction(&n, &m);

    printf("After changes: \nn = %d: %p\nm = %d: %p\n", n, &n, m, &m);

    return 0;
}


void ajoutDix(int *n){
    *n += 10;
}

void changeFonction(int *a, int *b){  // in comment I added another possible method
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void lecture_carac(int *number){
    printf("Entrez un integer : ");
    scanf(" %d", number);
}