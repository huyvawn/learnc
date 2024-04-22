#include "stdio.h"
int example11_2(){
//    int main(){
        int ary[5];
        int i,total,high;

    for (i = 0; i < 5; ++i) {
        printf("\nEnter value %d: ", i+1);
        scanf("%d", &ary[i]);
    }
        high = ary[0];

        for (i = 0; i <5; i++) {
            if(ary[i] > high)
                high = ary[i];
        }
    printf("\nHighest value entered was %d", high);

        int min = ary[0];

    for (i = 0; i < 5; ++i) {
        if(ary[i] < min)
            min= ary[i];
    }
    printf("\nLowest value was %d", min);

    for (i = 0, total = 0; i < 5; ++i) {
        total += ary[i];

    }
    printf("\nThe average of the element of ary is %d", total/i);
return 0;
}