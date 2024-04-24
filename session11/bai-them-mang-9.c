#include <stdbool.h>
#include "stdio.h"
#include "math.h"
#include "time.h"
#include "stdlib.h"

int baithemMang9(){
//    int main(){
    int arr[5];
    int i,j,max,min;
    bool isPrime = 1;
    srand(time(0));
    for (i = 0; i < 5; ++i) {
        do {
            isPrime =1;
            arr[i] = rand()%200;
            if (arr[i] <= 1)
                isPrime = 0;
            for (j = 2; j <= sqrt(arr[i]); ++j) {
                if (arr[i] % j == 0)
                    isPrime = 0;
            }

        }   while (isPrime == 0);
    }
    for ( i = 0; i < 5; ++i) {
        printf("\nPrime number %d is %d", i+1, arr[i]);
    }
    max = arr[0];
    min = max;
    for (int k = 0; k < 5; ++k) {
        if (arr[k]>max)
            max = arr[k];
        if(arr[k] < min)
            min = arr[k];
    }
    printf("\nHighest number is %d\nLowest number is %d", max,min);

    return 0;
}