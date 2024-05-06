#include "stdio.h"
#include "string.h"
int tryit1cach2ses17(){
//    int main(){
    char string1[50],string2[50];
    int isTrue = 1;
    int length1,length2;

    start:printf("\nEnter string 1: ");
    scanf("%[^\n]s",string1);
    fflush(stdin);
    printf("\nEnter string 2: ");
    scanf("%[^\n]s",string2);
    fflush(stdin);
    length1= strlen(string1);
    length2= strlen(string2);
    for (int i = length1-1,j = length2-1; i >= 0 ; --i,--j) {
        if(string1[i]!=string2[j]) {
            printf("\nString 1 does not occur at the end of string 2.");
            goto start;
        }
    }
    printf("\nString 1 occurs at the end of string 2.");
//    switch (isTrue) {
//        case 0:
//            printf("\nString 1 does not occur at the end of string 2.");
//            break;
//        default:
//            printf("\nString 1 occurs at the end of string 2.");
//    }
    return 0;
}