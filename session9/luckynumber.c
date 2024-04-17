#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int luckynum(){
//    int main(){
    int guess, randomNumber;

    srand(time(0));
    randomNumber= rand()% 100 + 1;
    do {
        printf("Guess the number between 1 and 100:");
        scanf("%d", &guess);

        if (guess > randomNumber)
            printf("Too high\n");
        else if ( guess < randomNumber)
            printf("Too low\n");
        else
            printf("Congratulations! You guessed the number.\n");
    } while (guess != randomNumber);
    return 0;
}