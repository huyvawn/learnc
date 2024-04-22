#include "stdio.h"
int example11_3(){
//    int main(){
    char alpha[26], alpha2[26];
    int i,j,k;

    for  (k = 65,i = 97, j = 0; i < 97+26 ; ++i, ++j, ++k) {
        alpha[j] = i;
        alpha2[j] = k;
        printf("The character now assigned is %c\n", alpha[j]);
        printf("%c\n", alpha2[j]);
    }
    return 0;
}