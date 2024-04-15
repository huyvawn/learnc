#include "stdio.h"

int bai7(){
//int main() {
    int num1, num2;
    printf("Nhap 2 so bat ki:\n");
    scanf("%d %d", &num1, &num2);

    if (num1 % num2 == 0)
        printf("%d la uoc cua %d", num2, num1);
    else if (num2 % num1 == 0)
        printf("%d la uoc cua %d", num1, num2);
    return 0;
}