//
// Created by vanminhthuy on 4/12/2024.
//

#include "example1.h"
#include<stdio.h>
int test1(){
//int main(){
    int x,y;
    char a ='y';
    x=y=0;
    if (a == 'y'){
        x += 5;
        printf("The numbers are %d and \t%d", x,y);
    }
    return 0;
}
