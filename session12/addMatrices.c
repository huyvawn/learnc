#include "stdio.h"
int addMatrices(){
//    int main(){
    int A[10][10], B[10][10], C[10][10];
    int row, col, i,j;
    printf("Enter the dimension of the matrices: ");
    scanf("%d %d", &row, &col);
    printf("Enter the value of matrix A and B: \n");
    for (i = 0; i < row; ++i) {
        for (j = 0; j < col; ++j) {
            printf("A[%d][%d], B[%d][%d]: ",i,j,i,j);
            scanf("%d %d", &A[i][j], &B[i][j]);
            C[i][j] = A[i][j] + B[i][j];

        }
    }
    for ( i = 0; i < row; ++i) {
        for (j = 0; j < col; ++j) {
            printf("A[%d][%d] = %d, B[%d][%d] = %d, C[%d][%d] = %d\n", i,j,A[i][j], i,j,B[i][j], i,j, C[i][j]);
        }
    }
    return 0;
}