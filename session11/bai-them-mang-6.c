#include "stdio.h"
#define MAX_LENGTH_NAME = 30;
int baithemMang6(){
//    int main(){
    char name[5][31];
    for (int i = 0; i < 5; ++i) {
        fflush(stdin);
        printf("\nEnter name for student %d (No longer than 30 characters): ", i+1);
        scanf("%[^\n]s", name[i]);
    }
    for (int i = 0; i < 5; ++i) {
        printf("\nStudent %d: %s", i+1,name[i]);
    }
return 0;
}