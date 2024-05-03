#include "stdio.h"
#include "string.h"
int ses17Tryit1(){
//int main(){
    char string1[50],string2[50],stringTest[50];

        printf("\nEnter string 1: ");
        scanf("%[^\n]s",string1);
    fflush(stdin);
        printf("\nEnter string 2: ");
        scanf("%[^\n]s",string2);
        int length2 = strlen(string2);
        int length1 = strlen(string1);
        int index = length2-length1;
    for (int i = index,j = 0; i < length2; ++i,++j) {
        stringTest[j]=string2[i];
    }
    printf("\n%s", stringTest);
    if(strcmp(string1,stringTest)==0)
        printf("\nString 1 occurs at the end of string 2.");
    else
        printf("\nString 1 does not occur.");
        return 0;
}