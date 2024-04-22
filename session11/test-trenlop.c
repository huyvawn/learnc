#include "stdio.h"
int test_trenlop(){
//    int main(){
    int arr[5],sum=0;
    for (int i = 0; i < 5; ++i) {
        printf("Input number in arr[%d]:",i);
        scanf("%d", &arr[i]);

    }
    for (int i = 0; i < 5; ++i) {
        sum+= arr[i];
    }
    printf("Tong la: %d", sum);
    return 0;
}