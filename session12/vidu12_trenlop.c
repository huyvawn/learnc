#include "stdio.h"
int vidu12Trenlop(){
//    int main(){
    int arr [3][2];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("\nInput arr[%d][%d]: ", i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < 3; ++i) {
        printf("\n");
        for (int j = 0; j < 2; ++j) {
            printf("%d\t", arr[i][j]);
        }
    }
    return 0;
}