#include<stdio.h>
int exercise3(){
//    int main(){
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a,&b,&c);
    if (a >= b && a >= c)
        printf("\n%d is the largest number", a);
    if (b >= a && b >= c)
        printf("\n%d is the largest number", b);
    if (c >= b && c >= a)
        printf("\n%d is the largest number", c);
}