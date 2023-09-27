#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//#include <conio.h>  


void ascii_character(void);

void guess_secret_num(void);

void lecture_carac(void);

int menu_colors(void);

/*int menu_colors_2(void);*/

void addTen(int *n);

void changeFonction(int *a, int *b);

int rock_papper_scissors(void);

int LireInf2(void);

int arbitre(int *firstplayer, int *secondplayer);

void ten_times_rock_papper_scissors(void);

int main(void){
    int n = 59;
    int m = 111;    

    //ascii_character();
    //guess_secret_num();
    //lecture_carac();
    //int menu_col = menu_colors(); 
    //printf("Un message d'erreur: %d\n", menu_col);
    
    /*printf("n before %d\n", n);
    addTen(&n);
    printf("n after %d\n", n);*/

    /*printf("n, m before: %d, %d\n", n, m);
    changeFonction(&n, &m);
    printf("n, m after: %d, %d\n", n, m);*/

    //ten_times_rock_papper_scissors();
    
    return 0;
}

void ascii_character(void){
    for (int i = 48; i < 127; ++i){

        if (i >= 48 && i <= 57)
            printf("Ascii caractere %c code %d\n", i, i);
        if (i >= 65 && i <= 90)
            printf("Ascii caractere %c code %d\n", i, i);
    }
}
void guess_secret_num(void){
    time_t t1;  // declare time variable
    srand ( (unsigned) time (&t1));
    int secret_num = rand() % 1000;
    int guess;
    int count = 1;
    int recommended = 500;
    printf("I choosed a secret number between 1 and 1000. \n");
    printf("Try to guess it\n");
    int local_min = 1, local_max = 1000;
    while (count != 10){
        printf("Enter a variable between %d and %d: ", local_min, local_max);
        printf("Recommended: %d\n", recommended);
        scanf("%d", &guess);
        
        if (guess == secret_num){
            printf("YOU WIN!\n");
            printf("You did %d try", count);
            if(count >= 2) printf("s\n");
            break;
        }
        else if (guess < secret_num) {
            printf("Greater than your guess\n");
            local_min = guess;
            count++;
            recommended = ((local_max - local_min) / 2) + local_min;
            }
        else {
            printf("Less than your guess\n");
            count++;
            local_max = guess;
            recommended = ((local_max - local_min) / 2) + local_min;
            }
    }
    if (count == 10) printf("Sorry You loosed, try again\n");
    printf("The secret number was: %d\n", secret_num);
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

/*int menu_colors_2(void){
    char sortir[1] = {"1"};
    char choise[10][10];
    char arr[7][7] = {"Green", "Red", "Blue", "Black", "White", "Pink", "Cyan"};
    char fav_colour[10][7];
    int len = *(&arr + 1) - arr;

    printf("Choose a color from this list: \n");
    for (int i = 0; i < len; ++i){
        printf("%s  ", arr[i]);
    }
    printf("\nEnter a color's name please: ");
    scanf(" %s", choice);

    while(strcmp(choice, sortir) != 0){
        
        for (int i = 0; i < d)
        printf("\nEnter a color's name please: ");
        scanf(" %s", choice);
    }

    return 0;
}*/

void addTen(int *n){
    *n += 10;
}

void changeFonction(int *a, int *b){
    *a = *a + *b;   // int tmp;
    *b = *a - *b;   // tmp = *a;
    *a = *a - *b;   // *a = *b;
                    //*b = tmp;
}

int rock_papper_scissors(void){
    // caillou par 0, papier par 1 et ciseaux par 2.
    int firstplayer;
    int secondplayer;
    firstplayer = LireInf2();
    secondplayer = LireInf2();
    int game = arbitre(&firstplayer, &secondplayer);
    return game;
}

int LireInf2(void){
    int user_input;
    do {
        printf("Choose between: 0 - Rock; 1 - Papper; 2 - Scissors: \n");
        if (scanf("%d", &user_input) == 1 && user_input >= 0 && user_input <= 2) {
            return user_input;
        }
        printf("Invalid input. Please try again.\n");

        while (getchar() != '\n');  // Clear input buffer
    } while(1);
}

int arbitre(int *firstplayer, int *secondplayer){
    if (*firstplayer == *secondplayer){
        printf("It's a DRAW! \n");
        return 0;
    }
    else if (*firstplayer == (*secondplayer + 1) % 3){
        printf("Player 1 WON! \n");
        return 1;
    }
    else {
        printf("Player 2 WON!\n");
        return 2;
    }
}


void ten_times_rock_papper_scissors(void){
    int player1, player2;
    for (int i = 0; i < 10; ++i) {
        int play = rock_papper_scissors();

        if (play == 1) { player1 += 1; }
        else if (play == 2) { player2 += 1; }
        else { continue; }
    }
    printf("Score total after 10 games: ");
    printf("\nPlayer 1: %d \nPlayer 2: %d\n", player1, player2);
}