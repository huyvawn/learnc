#include "stdio.h"
int lab5_03(){
//    int main(){
    int h, star, row = 1;
    printf("Nhap chieu cao cua tam giac(it nhat la 2): \n");
    scanf("%d", &h);
    while (h < 2){
        printf("\nBan da nhap sai. Nhap lai: \n");
        scanf("%d",&h);
    }
    while (row <= h){
        star = 1;
        while (star <= row){
            printf("*");
            star++;
        }
        row ++;
        printf("\n");
    }
    return 0;
}