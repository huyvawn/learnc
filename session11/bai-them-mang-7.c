#include "stdio.h"
#include "stdlib.h"
int baithemMang7(){
//    int main(){
    char text[11];
    printf("Enter max 10 characters: ");
    scanf("%[^\n]s", text);
    for (int i = 0; i < 10; ++i) {
        if (text[i] == '\0') {
            printf("End\tEnd\n");
            exit(0);
        }
        printf("%c\t%d\n",text[i], text[i]);
    }
    return 0;
}