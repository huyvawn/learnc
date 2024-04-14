#include<stdio.h>
#include<conio.h>

int greaterNumber(){
//    int main(){

    int num1, num2;
    printf("Enter the first number:\n");
    scanf("%d", &num1);
    printf("Enter the second number:\n");
    scanf("%d", &num2);
    if (num1 > num2)
        printf("The greater number is: %d", num1);
    else if (num2 > num1)
        printf("The greater number is: %d", num2);
    else
        printf("The numbers are equal.");

    return 0;
}