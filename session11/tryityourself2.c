#include "stdio.h"
#include "string.h"
#include "conio.h"
int try11_2(){
//    int main(){
    char text[100];
    int count=0;
    printf("Enter a line of text (max 100 characters): \n");
    scanf("%[^\n]s", text);
    for(int i = 0; i<99; i++){
        switch (text[i]) {
            case'a':
            case'e':
            case'i':
            case'o':
            case'u':
                count++;
        }
    }
    printf("Number of vowels is %d", count);
    return 0;
}