#include "stdio.h"

int bai6() {
//    int main() {
    int a, b, c;


    printf("Input three integers:");
    scanf("%d %d %d", &a, &b, &c);

    int case1 = (b * b + c * c == a * a);
    int case2 = (a * a + c * c == b * b);
    int case3 = (a * a + b * b == c * c);

    if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a)) {
        printf("\nDay la tam giac vuong\n");
        if (case1 == 1)
            printf("\n%d la canh huyen", a);
        if (case2 == 1)
            printf("\n%d la canh huyen", b);
        if (case3 == 1)
            printf("%d la canh huyen", c);
    } else
        printf("Khong phai tam giac vuong");
    return 0;
}