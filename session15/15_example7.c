#include "stdio.h"
void swap(int *u, int *v);
int ses15example7(){
//    int main(){
    int x,y,*px,*py;
    px = &x;
    py = &y;
    x = 15;
    y = 20;
    printf("Values of x and y are: %d\t%d",x,y);
    swap(px,py);
    printf("\nValues after interchanged: %d\t%d",x,y);
    return 0;
}
void swap(int *u, int *v){
    int temp = *u;
    *u = *v;
    *v = temp;
    return;
}