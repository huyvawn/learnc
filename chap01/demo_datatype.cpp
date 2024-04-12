//
// Created by vanminhthuy on 4/10/2024.
//

#include "demo_datatype.h"
#include <stdio.h>
int demo_datatype(){
//    int main(){
int integerVar = 10;
printf("Kieu so nguyen: %d\n", integerVar);

float floatVar = 3.14;
printf("Kieu so thuc: %.2f\n", floatVar);

char charVar = 'A';
printf("Kieu ky tu: %c\n", charVar);

int boolVar = 1;
printf("Kieu boolean: %d\n", boolVar);

char stringVar[]= "Hello world!";
printf("Kieu string: %s\n", stringVar);

return 0;
}