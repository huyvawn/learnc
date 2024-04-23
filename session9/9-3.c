#include "stdio.h"
int vidu93(){
//    int main(){
    int i,j,max;
    printf("Please enter the maximum value\n");
    printf("for which a table will be printed: ");
    scanf("%d", &max);
    for (i = 0, j = max; i <= max; i++, j--)
        printf("\n %02d + %02d = %02d", i,j,i + j);
    return 0;
}