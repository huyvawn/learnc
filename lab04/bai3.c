#include "stdio.h"

int bai3() {
//    int main(){
    int a, b, c;
    printf("Input three numbers:\n ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
        printf("max = %d", a);
    else if (b > a && b > c)
        printf("max = %d", b);
    else
        printf("max = %d", c);
    return 0;
}