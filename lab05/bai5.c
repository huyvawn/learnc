#include "stdio.h"
int lab5_05(){
//    int main(){
    int num, result = 0;

       printf("\nNhap num: ");
       scanf("%d", &num);

    while (num >= 0 && num < 100) {
        printf("\nNhap num: ");
        scanf("%d", &num);
        result++;
    }
    printf("\nresult: %d", result);
    return 0;
}
