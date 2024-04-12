//
// Created by vanminhthuy on 4/10/2024.
//

#include "salary.h"
#include<stdio.h>

int tax(){
//int main(){
    char name[50];
    printf("Enter your name: ");
    scanf("%[^\n]s", name);

    float hoursWorked;
    printf(" How many hours of work you had: ");
    scanf("%f", &hoursWorked);

    float hourlyRate;
    printf("Your hourly rate: ");
    scanf("%f", &hourlyRate);

    float totalPayment = hoursWorked*hourlyRate;
    float tax = 0.1*totalPayment;
    float netPayment= totalPayment - tax;

    printf("\nThank you %s\n This is your salary:\n", name);
    printf("-------------------\n");
    printf("Before tax: $%.2f\n", totalPayment);
    printf("After tax: $%.2f\n", netPayment);

    return 0;

}