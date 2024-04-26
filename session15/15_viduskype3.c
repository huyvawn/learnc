#include "stdio.h"
int add(int a,int b);

int viduskype3Sess15(){
//    int main(){
        int result = add(5,3);
    printf("Tong la: %d\n", result);
    int result2 = add(4,3);
    printf("Tong la: %d\n", result2);

    int num1,num2;
    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so thu hai: ");
    scanf("%d", &num2);

    int result3 = add(num1,num2);
    printf("Tong la: %d\n", result3);
    return 0;
}

int add(int a, int b){
    printf("\nThuc hien tinh cong:\n");
    printf("So hang a = %d\n", a);
    printf("So hang b = %d\n", b);
    return a+b;
    }