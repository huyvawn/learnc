#include "stdio.h"
int baiThemMang3(){
//int main(){
    int arr[10];
    int max,min,countMax = 0, countMin = 0, total = 0;
    for (int i = 0; i < 10; ++i) {
        printf("Enter number %d:\n", i+1);
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for (int i = 0; i < 10; ++i) {
        if (arr[i]>max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }
    for (int i = 0; i < 10; ++i) {
        if ( arr[i] == max)
            countMax++;
        if (arr[i] == min)
            countMin++;
        total += arr[i];
    }
    printf("Highest number is %d, number of occurance is %d\n", max, countMax);
    printf("Lowest number is %d, number of occurance is %d\n", min,countMin);
    printf("The sum is %d, average is %d", total,total/10);

    return 0;
}