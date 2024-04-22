#include "stdio.h"
int baiThemMang2(){
//    int main(){
    int arr[5];
    float floatArr[10];
    int i,j;
    for (i = 0; i < 5; ++i) {
        printf("Enter number %d:", i);
        scanf("%d", &arr[i]);
    }
    for ( j = 0, i=0; j < 10; ++j,++i) {
        if(j<=4) {
            floatArr[j] = arr[i];
            printf("floatArr[%d] is %f\t arr[%d] is %d\n", j,floatArr[j], i, arr[i]);
        }
        else {
            floatArr[j] = 0;
            printf("floatArr[%d] is %f\n", j,floatArr[j]);
        }
    }
    return 0;
}