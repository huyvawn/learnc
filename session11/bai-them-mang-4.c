
#include <stdbool.h>
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
int baithemMang4(){
//    int main() {
    int guess;
    bool guessTrue = false;
    srand(time(0));
    int arr[20];
    for (int i = 0; i < 20; ++i) {
        arr[i] = rand()%100;
        printf("%d\t",arr[i]);
    }
    do {
        printf("\nEnter a number from 0-99 to see if it's in the array: \n");
        scanf("%d", &guess);

        for (int i = 0; i < 20; ++i) {
            if (guess == arr[i])
                guessTrue = 1;
        }
        if (guessTrue == 1)
            printf("Your number is in the array.\n");
        else
            printf("Your number is not in the array.\n");
        guessTrue = 0;
    } while(guess != 111 );

    return 0;
}