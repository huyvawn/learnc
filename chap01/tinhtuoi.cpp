//
// Created by vanminhthuy on 4/10/2024.
//

#include "tinhtuoi.h"
#include<stdio.h>
#include<stdlib.h>

int tinhtuoi(){
//int main(){
    char name[50];
    printf("enter your name: ");
   scanf("%[^\n]s", name);  // Nhap ten bao gom space va khong nhan xuong dong (enter)

   int birthYear;
   printf("Enter your year of birth: ");
   scanf("%d", &birthYear);

   int currentYear = 2024;
   int age = currentYear - birthYear;

   printf("Hello, %s!\n", name);
   printf(" You are %d years old.\n", age);

   if (age<0){
       printf("Error. You input wrong year of birth");
   } else if(age<18){
       printf("You are underage");
   } else if(age<60){
       printf("You are an adult");
   } else {
       printf("You are an elder");
   }

}