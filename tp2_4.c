#include <stdio.h>
#include <string.h>
int menu_colors(void);

int main(void){
    int error = menu_colors();
    printf("Error message: %d\n", error);
    return 0;
}

int menu_colors(void){
    char choice[10];
    char arr[7][7] = {"Green", "Red", "Blue", "Black", "White", "Pink", "Cyan"};
    char fav_colour[10][7];
    int len = *(&arr + 1) - arr;
    printf("Choose a color from this list: \n");
    for (int i = 0; i < len; ++i){
        printf("%s  ", arr[i]);
    }
    printf("\nEnter a color's name please: ");
    scanf("%s", choice);
    
    for(int i = 0; i < len; ++i){
        if (strcmp(choice, arr[i]) == 0){
            printf("You choosed: %s\n", arr[i]);
            break;
        }
        if (i == len - 1) {
            printf("Sorry, but we have not %s's color.\n", choice);
            return 1;
        }
    }
    return 0;
}