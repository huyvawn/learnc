#include "stdio.h"
int baiThemMang1(){
//    int main(){
    int arr[10];
    for (int i = 0; i < 10; ++i) {
        printf("Enter number %d:\n", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i+=2) {
        printf("Number %d is: %d\n", i,arr[i]);
    }
    return 0;
}