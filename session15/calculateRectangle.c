#include "stdio.h"
float area(float length,float width);
float perimeter(float length, float width);
float area(float length,float width){
    float result = length*width;
    return result;
}
float perimeter(float length,float width){
    float result = (length+width)*2;
    return result;
}

int luyenHambai6(){
//    int main(){
    float length,width,result = 0;
    int choice;
    do {
        printf("\nEnter length and width of the rectangle: ");
        scanf("%f %f", &length, &width);
        printf("\n1.Calculate area.\n2.Calculate perimeter.\n3.Quit.");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                result = area(length, width);
                break;
            case 2:
                result = perimeter(length, width);
                break;
            case 3:
                continue;

            default:
                printf("\nError.");
        }

    printf("\nResult is %f",result);
    } while (choice!=3);
    return 0;
}