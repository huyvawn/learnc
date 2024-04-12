//
// Created by vanminhthuy on 4/8/2024.
//

#ifndef LEARNC_EX03_H
#define LEARNC_EX03_H
#include <stdio.h>

class ex03 {
void main(){
    int principal, period;
    float rate, si;
    principal = 1000;
    period = 3;
    rate = 8.5;

    si = principal*period*rate/100;

    printf("%f", si);
}
};


#endif //LEARNC_EX03_H
