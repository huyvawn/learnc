#include<stdio.h>
int exercise2(){
//    int main(){
    char a;
    printf("Input a character in the alphabet: ");
    scanf("%c", &a);
    printf("Input: %c\n", a);
    switch(a){
        case 'a':
        case'A':
            printf("Output: Ada");
            break;
        case 'b':
        case 'B':
            printf("Output: Basic");
            break;
        case 'c':
        case 'C':
            printf("Output: COBOL");
            break;
        case 'd':
        case 'D':
            printf("Output: dBASE III");
            break;
        case 'e':
        case 'E':
            printf("Output:Elixir ");
            break;
        case 'f':
        case 'F':
            printf("Output:F# ");
            break;
        case 'g':
        case 'G':
            printf("Output:Genie ");
            break;
        case 'h':
        case 'H':
            printf("Output: HolyC");
            break;
    }
}