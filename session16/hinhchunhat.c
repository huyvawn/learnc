#include "stdio.h"
float chuvi(float width, float height);
float dientich(float width, float height);
int hinhchunhat(){
//    int main(){
        float width,height,area,perimeter;
    printf("\nNhap chieu rong hinh chu nhat: ");
    scanf("%f", &width);
    printf("\nNhap chieu dai hinh chu nhat: ");
    scanf("%f",&height);
    area = dientich(width,height);
    perimeter = chuvi(width,height);
    printf("Dien tich hinh chu nhat la: %f\nChu vi la: %f",area,perimeter);
    return 0;
}

float dientich(float width, float height){
        float ketqua = width*height;
        return ketqua;
    }
float chuvi(float width,float height){
        float chuvi = (width+height)*2;
        return chuvi;
    }