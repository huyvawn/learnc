#include "stdio.h"
#include "stdlib.h"

int lab5_06(){
//int main() {
    int n, a;
    char c;

    printf("Nhap so N (1-9):\n ");
    scanf("%d", &n);
    while (!(1 <= n && n <= 9)) {
        printf("Nhap sai. Ban co muon tiep tuc?(y/n): ");
        scanf(" %c", &c);
        if (c == 'y' || c == 'Y') {
            printf("Nhap n:\n ");
            scanf("%d", &n);
        } else {
            printf("Ket thuc chuong trinh.");
            exit(0);
        }

    }

    while (1 <= n && n <= 9) {
        printf("Bang cuu chuong cua so %d\n", n);
        for (a = 1; a <= 9; a++)
            printf("%d x %d = %d\n", n, a, a * n);
        printf("Ban co muon tiep tuc? (Y/N):\n ");
        scanf(" %c", &c);
        if (c == 'y' || c == 'Y') {
            printf("Nhap n:\n ");
            scanf("%d", &n);
            while (!(1 <= n && n <= 9)) {
                printf("Nhap sai. Ban co muon tiep tuc?(y/n): ");
                scanf(" %c", &c);
                if (c == 'y' || c == 'Y') {
                    printf("Nhap n:\n ");
                    scanf("%d", &n);
                } else {
                    printf("Ket thuc chuong trinh.");
                    exit(0);
                }

            }
        } else {
            printf("Ket thuc chuong trinh.");
            exit(0);
        }
    }
    return 0;
}
