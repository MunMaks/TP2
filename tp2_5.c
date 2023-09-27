#include <stdio.h>
void addTen(int *n);

void changeFonction(int *a, int *b);

int main(void){
    int a = 10, b = 47;
    // Fonction adds 10 to a variable a.
    addTen(&a);
    // Fonction changes values of two variables by their adress.
    changeFonction(&a, &b);  
    return 0;
}


void addTen(int *n){
    *n += 10;
}

void changeFonction(int *a, int *b){  // in comment I added another possible method
    *a = *a + *b;   // int tmp;
    *b = *a - *b;   // tmp = *a;
    *a = *a - *b;   // *a = *b;
                    //*b = tmp;
}
