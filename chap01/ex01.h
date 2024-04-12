#include <stdio.h>

//int chap01.ex01{
//int sum_main()
int main()
{
    printf("Hello\t, World\n");
    int a,b,sum;
    printf("Enter the first number:");
    scanf("%d", &a);
    printf("Enter the second number:");
    scanf("%d",&b);
    sum=a+b;
    printf("The sum is: %d", sum);
    return 0;
}
