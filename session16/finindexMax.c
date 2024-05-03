#include "stdio.h"

int indexMax(int arr[], int n);

int indexMin(int arr[], int n);

int findindexMax(){
//int main() {
    int n;
    printf("\nNhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; ++i) {
        printf("\nNhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nIndex phan tu lon nhat la: %d", indexMax(arr, n));
    printf("\nIndex phan tu nho nhat la : %d", indexMin(arr, n));
    return 0;
}

int indexMax(int arr[], int n) {
    int max = arr[0];
    int inMax = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i];
            inMax = i;
        }
    }
    return inMax;
}

int indexMin(int arr[], int n) {
    int min = arr[0];
    int inMin = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] < min) {
            min = arr[i];
            inMin = i;
        }
    }
    return inMin;
}