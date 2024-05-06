#include "stdio.h"
float Average(int arr[],int size);
int ses17try2(){
//    int main(){
        int size;
    printf("\nSize of the array: ");
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i < size; ++i) {
        printf("\nEnter number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nAverage of the array is %f", Average(arr,size));
    return 0;
}

float Average(int arr[],int size){
        float total=0;
        float result;
    for (int i = 0; i < size; ++i) {
        total+= arr[i];
    }
    result = total/size;
    return result;
    }