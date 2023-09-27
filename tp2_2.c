#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void guess_secret_num(void);

int main(void){
    // Guess secret random number from 0 to 1000
    guess_secret_num();
    return 0;
}

void guess_secret_num(void){
    time_t t1;  // declare time variable
    srand ( (unsigned) time (&t1));
    int secret_num = rand() % 1000;
    int guess;
    int count = 1;
    int recommended = 500;
    int local_min = 1, local_max = 1000;

    printf("I choosed a secret number between 1 and 1000. \n");
    printf("Try to guess it\n");

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