#include<stdio.h>
int upper_lower(){
//int main(){
    char c;
    printf("Please enter a character: ");
    scanf("%c", &c);
    if (c>= 'A' && c<= 'Z')
        printf("Lowercase character = %c", c +'a' - 'A');
    else
        printf("Already lowercase: %c", c);
    printf("\nc = %d", c);
    return 0;
}