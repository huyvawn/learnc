#include "stdio.h"
int performOperation(int num1, int num2, char operator){
int result;

    switch (operator) {
        case'+':
            result= num1+num2;
            break;
        case'-':
            result = num1-num2;
            break;
        case'*':
            result= num1*num2;
            break;
        case'/':
                result = num1/num2;
                break;
        defaul:
            printf("invalid operator\n");
            result = 0;
    }
    return result;
}

int viduskype4Sess15(){
//    int main(){
    int num1,num2;
    char operator;

    printf("Enter first number: ");
    scanf("%d", &num1);
    fflush(stdin);
    printf("Enter an operator(+,-,*,/): ");
    scanf("%c", &operator);
    printf("Enter second number: ");
    scanf("%d", &num2);

    int result = performOperation(num1, num2, operator);
    printf("Result: %d\n", result);

    return 0;
}
