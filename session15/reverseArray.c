#include "stdio.h"
void printArray(float arr1[],int size);
void reverseArray(float arr[],int size);
int  reverseArrayexcercise(){
//    int main(){
    float arr[5];
    int size = 5;

    for (int i = 0; i < size; ++i) {
        printf("\nEnter number %d:", i+1);
        scanf("%f", &arr[i]);
    }
    printArray(arr,size);
    reverseArray(arr,size);


    return 0;
}
void printArray(float arr1[], int size){
    for (int i = 0; i < size; ++i) {
        printf("\t%f",arr1[i]);
    }
    return;
    }
    void reverseArray(float arr[], int size){
int i,j;
        for (i = 0,  j = size - 1; i != j ; ++i,--j) {
            float temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        printf("\nArray after reversed is:\n");
        printArray(arr,size);
        for (i = 0; i < size; ++i) {
            printf("\t%f",arr[i]);
        }
        return;
    }
