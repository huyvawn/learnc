#include "stdio.h"
int example11_2(){
//    int main(){
        int ary[10];
        int i,total,high;

    for (int i = 0; i < 10; ++i) {
        printf("\nEnter value %d: ", i+1);
        scanf("%d", &ary[i]);
    }
        high = ary[i];

        for (i = 0; i <10; i++) {
            if(ary[i] > high)
                high = ary[i];
        }
    printf("\nHighest value entered was %d", high);

    for (i = 0, total = 0; i < 10; ++i) {
        total += ary[i];

    }
    printf("\nThe average of the element of ary is %d", total/i);
return 0;
}