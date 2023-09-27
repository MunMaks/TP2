#include <stdio.h>

void ascii_character(void);

int main(void){
    // This fonction shows: "0 - 9" and "A - Z"
    ascii_character();  
    return 0;
}

void ascii_character(void){
    for (int i = 48; i < 91; ++i){  

        if (i >= 48 && i <= 57)
            printf("Ascii caractere %c code %d\n", i, i);
        if (i >= 65 && i <= 90)
            printf("Ascii caractere %c code %d\n", i, i);
    }
}