#include "stdio.h"
int maxElement(int arr[],int n);
int minElement(int arr[],int n);
int findmax(){
//    int main(){
        int n;
    printf("\nNhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; ++i) {
        printf("\nNhap phan tu so %d:",i+1);
        scanf("%d",&arr[i]);
    }
    int max= maxElement(arr,n);
    int min = minElement(arr,n);
    printf("\nGia tri lon nhat : %d\nGia tri nho nhat: %d",max,min);
    return 0;
}

int maxElement(int arr[],int n){
        int max = arr[0];
    for (int i = 0; i < n; ++i) {
        if (arr[i]>max)
            max=arr[i];
    }
    return max;
    }
int minElement(int arr[],int n){
        int min = arr[0];
    for (int i = 0; i < n; ++i) {
        if (arr[i]<min)
            min = arr[i];
    }
    return min;
    }
