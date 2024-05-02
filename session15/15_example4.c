#include "stdio.h"
int ses15Example4(){
//    int main(){
    int i,digit,num,sum = 0;
    printf("The numbers which equal the sum of cubes of their digits are:\n");
    for ( i = 0; i < 999; ++i) {
        sum = 0;
        num = i;
        while (num){
            digit = num %10;
            sum += digit*digit*digit;
            num = num /10;
        }
        if (sum == i)
            printf("%d\n", i);
    }
    return 0;
}