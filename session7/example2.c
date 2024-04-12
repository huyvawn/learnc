#include<stdio.h>
int example2(){
//    int main(){
    int year, bizDone;
    printf("Enter your years of work: ");
    scanf("%d", &year);
    printf("\nYour biz done: ");
    scanf("%d", &bizDone);

    if(year >= 10 || bizDone >= 100 && year >= 3)
        printf("\nYou have bonus 10 days off.");
    else
        printf("\nSorry. No extra perks.");
}