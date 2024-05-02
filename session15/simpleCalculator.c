#include "stdio.h"
#include "stdlib.h"
void menu();
int sum(int a,int b);
int sub(int a,int b);
int mul(int a, int b);
double divide(int a, int b);

void menu(){
    printf("\nCalculator v1.0");
    printf("\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n6.Exit");
    printf("\nEnter your choice:");

}

int sum(int a, int b){
    int total = a+b;
    return total;
}

int sub(int a, int b){
    int result = a - b;
    return result;
}

int mul(int a, int b){
    int result = a*b;
    return result;
}

double divide(int a, int b){
    double result = a/b;
    return result;
}

int luyenHamBai4(){
//    int main (){
    int choice,a,b;
    double result = 0;
    do {
        menu();
        scanf("%d", &choice);
        if (choice == 6)
            exit(0);
        printf("\nEnter two number :");
        scanf("%d %d", &a,&b);
        printf("choice = %d", choice);
        switch (choice) {
            case 1:
                result = sum(a,b);
                break;
            case 2:
                result = sub(a,b);
                break;
            case 3:
                result = mul(a,b);
                break;
            case 4:
                if(b ==0)
                    printf("\nInvalid input. Second number cannot be 0.");
                else
                result = divide(a,b);
                break;
            default:
                printf("\nInvalid Input.");
                break;
        }
        printf("\nThe result is %f",result);
    } while(choice!=6);
    return 0;
}

