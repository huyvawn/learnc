#include<stdio.h>
#include<conio.h>
int caseswitch(){
//    int main(){

    int num1, num2, res;
    char op;
    num1 = 90;
    num2 = 33;
    op = '-';
    switch (op){
        case '+':
            res = num1 + num2;
            printf("\nThe sum is: %d", res);
            break;
        case '-':
            res = num1 - num2;
            printf("\nNumber after substraction: %d", res);
            break;
        case '/':
            res = num1 / num2;
            printf("\nNumber after devision: %d", res);
            break;
        case '*':
            res = num1 * num2;
            printf("\nNumber after multiplication: %d", res);
            break;
        defaul:
            printf("\nInvalid.");
            break;
    }

    return 0;
}