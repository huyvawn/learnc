#include "stdio.h"
float crystalTienDien(int sokwh);
//int bai2(){
    int main(){
        int sokwh;
        do {
            printf("\nEnter number of kWh used: ");
            scanf("%d", &sokwh);
            if (sokwh < 0)
                printf("\nInvalid input, try again.");
        }   while (sokwh<0);

    float total = crystalTienDien(sokwh);
    printf("\nTotal bill is %.2f VND",total);
    return 0;
}
float crystalTienDien (int sokwh){
        float total;
        if (sokwh<= 50){
            total = sokwh*500;
        }
        else if (sokwh >50 && sokwh<=100)
            total = 50*500+(sokwh-50)*700;
        else if (sokwh > 100)
            total = 50*500 + 50*700 + (sokwh-100)*900;
        else total = 0;
        return total;
    }