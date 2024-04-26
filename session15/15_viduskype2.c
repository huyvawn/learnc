#include "stdio.h"
int isEven(int num){
    return num % 2 == 0;
}

int viduskype2Session15(){
//    int main(){
    int number = 8;
    if(isEven(number))
        printf("%d la so chan.\n", number);
    else
        printf("%d la so le.\n", number);
    return 0;

}