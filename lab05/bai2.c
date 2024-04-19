#include "stdio.h"
int lab5_2(){
//    int main (){
    int a, chuso, tong = 0;
    printf("Nhap mot so nguyen duong:");
    scanf("%d", &a);
    for(;a != 0;){
        chuso = a % 10;
        tong += chuso;
        a /= 10;
    }
    printf("\nTong cac chu so la: %d", tong);
return 0;
}