#include "stdio.h"
int indexMin(int arr[],int size);
int indexMin(int arr[],int size){
    int min = arr[0];
    int indexMin = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i]<min){
            min = arr[i];
            indexMin = i;
        }
    }
    return indexMin;
}
int indexMinexcercise(){
//    int main(){
    int arr[6];
    int size = 6;
    for (int i = 0; i < size ; ++i) {
        printf("\nEnter number %d: ",i+1);
        scanf("%d", &arr[i]);
    }
    int index = indexMin(arr, size);
    printf("The index of min is %d", index);
    return 0;
}