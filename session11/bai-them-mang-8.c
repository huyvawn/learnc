#include "stdio.h"
int baithemMang8(){
//    int main(){
    float student[5][6];
    float average[5], total[5];

    for (int i = 0; i < 5; ++i) {
        total[i] = 0;
        printf("\nNhap diem cho hoc vien %d ",i+1);
        for (int j = 0; j < 6; ++j) {
            printf("\nNhap diem cho mon %d: ",j+1);
            scanf("%f", &student[i][j]);
            total[i]+= student[i][j];
        }
        average[i] = total[i]/6;
    }

    for (int i = 0; i <5 ; ++i) {
        printf("\nHoc vien %d: ",i+1);
        for (int j = 0; j < 6; ++j) {
            printf("\nDiem mon %d: %f ",j+1,student[i][j]);
        }
        printf("Trung binh: %f", average[i]);
    }
    return 0;
}