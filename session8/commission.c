#include<stdio.h>
#include<conio.h>

int commission(){
//    int main(){

    float com = 0, sales_amt;
    printf("Enter the sales amount:\n ");
    scanf("%f", &sales_amt);
    if(sales_amt >= 10000)
        com = sales_amt * 0.1;
    printf("your commission fee is: %f", com);

    return 0;
}