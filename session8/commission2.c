#include<stdio.h>
#include<conio.h>

int commission2(){
//    int main(){
    float com = 0, sales_amt;
    char grade;

    printf("\nEnter the grade: ");
    scanf("%c", &grade);
    printf("\nEnter the sales amount: ");
    scanf("%f", &sales_amt);

    if (sales_amt >= 10000)
        if (grade == 'a' || grade == 'A')
            com = sales_amt * 0.1;
        else
            com = sales_amt * 0.08;
    else
        com = sales_amt * 0.05;
    printf("\n Commission = %f", com);

    return 0;
}