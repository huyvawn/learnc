#include "stdio.h"
#include "math.h"
float getArea(int a, int b, int c);
int AreaofTriangle(){
//    int main(){
    int a,b,c;

    printf("Enter three numbers to form a triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    while(a + b <= c || a + c <= b || b + c <= a){  // to form a triangle, the sum of 2 sides is always greater than the 3rd side
        printf("Invalid input to form a triangle. Enter again: ");
        scanf("%d %d %d",&a,&b,&c);
    }
    float area = getArea(a,b,c);
    printf("Area of the triangle is %f",area);
    return 0;
}

float getArea(int a, int b, int c){
        int s = (a+b+c)/2; //semi perimeter
        float area = sqrt(s*(s-a)*(s-b)*(s-c)); // heron's formula
        return area;
    }