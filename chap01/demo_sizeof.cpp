//
// Created by vanminhthuy on 4/10/2024.
//

#include "demo_sizeof.h"
#include<stdio.h>

int demo_sizeof(){
//int main(){
    float r,c,s;
    printf("Radius of the circle: ");
    scanf("%f", &r);
    c=6.28*r;
    s=3.14*r*r;

    printf("\n The result of the calculation is follow: \n");
    printf("-------------------\n");
    printf("Radius of circle: %8.1f m\n", r);
    printf("Perimeter of the circle: %8.2f m\n", c);
    printf("Size of the circle: %8.2f m\n", s);
    printf("-------------------\n");

//    Vi du 2
    printf("Data type   \t| Size of byte\n");
    printf("int         \t| %d byte\n", sizeof(int)   );
    printf("float       \t| %d byte\n", sizeof(float));
    printf("unsigned int\t| %d byte\n", sizeof(unsigned int));
    printf("short int   \t| %d byte\n", sizeof(short int));
    printf("long int    \t| %d byte\n", sizeof(long int));
    printf("double      \t| %d byte\n",sizeof(double));

    return 0;

}