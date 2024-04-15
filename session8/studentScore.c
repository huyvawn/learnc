#include<stdio.h>
#include<conio.h>

int studentScore(){
//    int main(){

    float m1, m2, m3, avg;
    printf("Enter your Math score:");
    scanf("%f", &m1);
    while (m1 < 0 || m1 > 100)
    {
        printf("\nInvalid input. Enter again: ");
        scanf("%f", &m1);
    }

    printf("\nEnter your Literature score: ");
    scanf("%f", &m2);
    while (m2 < 0 || m2 > 100)
    {
        printf("\nInvalid input. Enter again: ");
        scanf("%f", &m2);
    }

    printf("\nEnter your English score: ");
    scanf("%f", &m3);
    while (m3 < 0 || m3 > 100)
    {
        printf("\nInvalid input. Enter again: ");
        scanf("%f", &m3);
    }

    avg = (m1 + m2 + m3)/3;
   printf("\n Your average score is: %f", avg);
   if (avg >= 90)
       printf("\nYou got E+");
   else if (80 <= avg && avg < 90)
       printf("\nYou got E");
   else if (70 <= avg && avg < 80)
       printf("\nYou got A+");
   else if (60 <= avg && avg < 70)
       printf("\nYou got A");
   else if (50 <= avg && avg < 60)
       printf("\nYou got B+");
   else
       printf("\n You failed");

 return 0;
}