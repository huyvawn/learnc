#include "stdio.h"

int lab05_6(){
//int main() {
    int n, i;
    char ans;
    do {
        do {
            printf("Nhap vao mot so nguyen nho hon 10: ");
            scanf("%d", &n);
        } while (n >= 10);
        printf("In ra bang cuu chuong cua %d: \n", n);
        for (i = 1; i <= 10; ++i) {
            printf("\t%02d x %02d = %02d\n", i, n, i * n);
        }
        fflush(stdin);
        printf("Ban co muon tiep tuc khong? (Y/N): ");
        scanf("%c", &ans);
    } while (ans == 'Y' || ans == 'y');
    return 0;
}