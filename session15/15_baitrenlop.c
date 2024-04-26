#include "stdio.h"
void drawRectangle(int n,int col);
void drawTriangle(int n);
void drawTriangle(int n) {
    for (int i = 0; i < n; ++i) {
        printf("\n");
        for (int j = 0; j < i + 1; ++j) {
            printf("*");
        }
    }
}
void drawRectangle(int n, int col) {
    for (int i = 0; i < n; ++i) {
        printf("\n");
        for (int j = 0; j < col; ++j) {
            printf("*");
        }
    }
}
int BaitrenlopSession15(){
//int main(){
    int n,col;
    printf("\nEnter number of row: ");
    scanf("%d", &n);
    printf("\nEnter number of column: ");
    scanf("%d", &col);

    drawRectangle(n,col);
    drawTriangle(n);


    return 0;
}