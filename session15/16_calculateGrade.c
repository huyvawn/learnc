#include "stdio.h"
char calculateGrade(int marks) {
    char grade;

    if(marks >=90){
        grade = 'A';
    }
    else if(marks >= 80) {
        grade = 'B';
    } else if(marks >= 70){
        grade = 'C';
    } else if(marks >= 60){
        grade = 'D';
    } else {
        grade = 'F';
    }
    return grade;
}

int Sess16calcuteGrade(){
//    int main(){
    int marks;
    printf("Mark >= 90 ==> GRade : A\n");
    printf("Mark >= 80 ==> GRade: B\n");
    printf("Mark >= 70 ==> Grade: C\n");
    printf("Mark >= 60 ==> GRade: D\n");
    printf("Mark < 60 ==> GRade: F\n");
    printf("ENter marks: ");
    scanf("%d", &marks);

    char grade = calculateGrade(marks);
    printf("GRade: %c\n", grade);
    return 0;

}