#include "stdio.h"
int result;
int calculateFactorial(int num){
    result = num;
    for (int i = 1 ; i < num ; ++i) {
        result = result*i;
    }
    return result;
}
int Ses16calculateFactorial(){
//    int main(){
    int num;
    do {
        printf("\nEnter number you want to calculate factorial: ");
        scanf("%d", &num);
        if (num > 0){
        result = calculateFactorial(num);
        printf("Factorial of %d is %d", num, result);
        }
        else
            printf("\nInvalid input. Try again");
    } while (num != 0);

    return 0;
}