#include "stdio.h"
//int bai1(){
    int main(){
    int size,positiveMin,positiveTest=1, isGood = 0;
    printf("\nEnter the number of elements in the array: ");
    scanf("%d",&size);
    int arr[size];
    do {
        for (int i = 0; i < size; ++i) {
            printf("\nEnter number %d: ", i + 1);
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < size; ++i) {
            if (arr[i] > 0)
                isGood = 1;
        }
        if(isGood == 0)
            printf("\nNo positive numbers.Try again");
    }   while (isGood==0);

    for (int i = 0; i < size; ++i) {
        if (arr[i]>0)
            positiveTest= arr[i];

    }
    positiveMin = positiveTest;
    for (int i = 0; i < size; ++i) {
        if(arr[i]>0){
            if (arr[i]<positiveMin)
                positiveMin = arr[i];
        }
    }
    printf("\nThe smallest positive number is %d",positiveMin);
    return 0;
}