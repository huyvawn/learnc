#include "stdio.h"
float calculateArea(float r) {
    return 3.14 * r * r;
}
float calculatePerimeter(float r){
    return 3.14*2*r;
}
int calculateCircle(){
//    int main(){
    float r;
    printf("\nEnter radius of the circle(m): ");
    scanf("%f", &r);
    float area = calculateArea(r);
    float perimeter = calculatePerimeter(r);
    printf("\nArea of the circle: %.2f m", area);
    printf("\nPerimeter of the circle: %.2f m", perimeter);
    return 0;
}