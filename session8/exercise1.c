#include<stdio.h>
int exercise1(){
//    int main(){
    int x,y;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &x,&y);
    if(x < 2000 || x > 3000)
        printf("%d", x);
    if (y > 100 && y < 500)
        printf("%d", y);

    return 0;
}