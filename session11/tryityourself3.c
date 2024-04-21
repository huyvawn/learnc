#include "stdio.h"
//int tryityourself3(){
    int main() {
    int i = 0,j = 0;
    int x[5];
    int temp;

    for (i = 0; i < 5; ++i) {
        printf("Enter array of 5 numbers: \n");
        scanf("%d", &x[i]);
    }
    for (i = 0; i < 5; ++i) {
        printf("%d\t", x[i]);
    }
    i -= 1;

    while (i != j) {
        temp = x[i];
        x[i] = x[j];
        x[j] = temp;
        i--;
        j++;
    }
    printf("Reversed array is:\n");
    for (i = 0; i < 5; ++i) {
        printf("%d\t", x[i]);
    }
    return 0;
}