#include "stdio.h"

int bai4(){
//int main() {
    char c;
    printf("Input a letter in the alphabet:\n");
    scanf("%c", &c);
    if (!(('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z')))
        printf("%c is not in the alphabet. ", c);
    else {
        switch (c) {
            case 'a':
            case 'A':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'e':
            case 'E':
            case 'u':
            case 'U':
                printf("%c is a vowel.", c);
                break;
            default:
                printf("%c is a consonant.", c);

        }
    }
    return 0;

}