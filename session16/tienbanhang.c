#include "stdio.h"
float totalPrice(int quantity, float price);
int tienbanhang(){
//    int main(){
        int quantity;
        float price,total,aftertax;
    printf("\nNhap so luong: ");
    scanf("%d", &quantity);
    printf("\nNhap don gia:$ ");
    scanf("%f",&price);
    total= totalPrice(quantity,price);
    aftertax=total*1.05;
    printf("\nTong tien don hang la: $%f\t Thue 5%\nDon hang sau thue la %f",total,aftertax);
    return 0;
}

float totalPrice(int quantity, float price){
        float result = quantity*price;
        if (result >= 100 && result <200)
            result = result*0.98;
        if(result >= 200)
            result= result*0.95;
        return result;
    }