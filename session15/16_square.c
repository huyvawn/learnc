#include "stdio.h"
int square(int num){
    return num*num;
}
int calculateSquare(){
//    int main(){
    int num;
    printf("\nENter a number: ");
    scanf("%d", &num);
    int result = square(num);
    printf("Square of that number is %d", result);
    return 0;
}