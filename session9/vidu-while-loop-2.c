#include "stdio.h"
int exampleWhileLoop2(){
//    int main(){
    int count = 1;
    while (count <= 10){
        printf("\nIteration number %d\n", count);
        count++;
    }
    printf("\nThe loop is completed.\n");
    return 0;
}