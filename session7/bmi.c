#include<stdio.h>
//int bmi(){
    int main(){
float weight, height;

printf("Nhap can nang(kg): ");
scanf("%f", &weight);
printf("\nNhap chieu cao(m): ");
scanf("%f", &height);

float bmi = weight / (height *height);

printf("\nChi so BMI cua ban la: %.2f", bmi);

if (bmi < 18.5)
    printf("\n Ban dang o trong tinh trang gay.");
else if (bmi < 24.9)
    printf("\nBan dang o trong tinh trang binh thuong. ");
else if (bmi < 29.9)
    printf("\nBan dang o trong tinh trang thua can.");
else
    printf("\nBan dang o trong tinh trang beo phi");

return 0;
}