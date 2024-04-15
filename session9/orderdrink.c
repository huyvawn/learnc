#include "stdio.h"

int orderdrink(){
//int main() {
    int num, mem;
    float price, total, discount;
    char drinkname[50];

    printf("Enter the name of drink:\n");
    scanf("%[^\n]s", drinkname);
    printf("Enter the price:\n");
    scanf("%f", &price);
    printf("How many you want to order?\n");
    scanf("%d", &num);
    printf("Type of membership (0-2):\n");
    scanf("%d", &mem);

    switch (mem) {
        case 0:
            discount = 1;
            printf("No discount for your membership.\n");
            break;
        case 1:
            discount = 0.95;
            printf("Membership gets 5 percents discount\n");
            break;
        case 2:
            discount = 0.9;
            printf("You have discount 10 percents\n");
            break;
    }
    total = price * num * 1.08 * discount;
    printf("Total price for your order of %s (after tax) is %.2f", drinkname, total);
    return 0;
}