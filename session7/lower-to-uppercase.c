#include<stdio.h>
int lower_upper(){
//int main(){
    char c;
    printf("Please enter a character: ");
    scanf("%c", &c);
    if (c>= 'a' && c<= 'z')
        printf("Uppercase character = %c", c - ('a' - 'A'));
    else
        printf("Already uppercase: %c", c);
    printf("\nc = %d", c);
    return 0;
}