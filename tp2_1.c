#include <stdio.h>

void ascii_character(void);

int main(void){
    // This fonction shows: "0 - 9" and "A - Z"
    ascii_character();  
    return 0;
}

void ascii_character(void){
    // "0 - 9" and "A - Z"
    for (int i = 0; i <= 9; ++i){  
        printf("Ascii caractere %c code %d \n", '0' + i, '0' + i);
    }
    printf("\n\n");
    for(int i = 0; i < 26; ++i){
        printf("Ascii caractere %c code %d\n", 'A'+i, 'A' + i);
    }
}