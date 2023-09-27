#include <stdio.h>

int rock_papper_scissors(void);

int LireInf2(void);

int arbitre(int *firstplayer, int *secondplayer);

void ten_times_rock_papper_scissors(void);

int main(void){
    
    // 1 game and 10 games of rock, papper, scissors
    int player = rock_papper_scissors();
    printf("Player-%d WON!\n", player);

    // ten_times_rock_papper_scissors();

    return 0;
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