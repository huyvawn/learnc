#include "stdio.h"

int bai5(){
//int main() {
    int choice;
    printf("\n \t \t MENU");
    printf("\n===================");
    printf("\n1. CF");
    printf("\n2. C");
    printf("\n3. HDJ");
    printf("\n4. DreamWeaver");
    printf("\n5. RDBMS");
    printf("\n6. Learn Java By Example");
    printf("\n===================");
    printf("\nChon:\n ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Ban chon CF");
            break;
        case 2:
            printf("Ban chon C");
            break;
        case 3:
            printf("Banchon HDJ");
            break;
        case 4:
            printf("Ban chon DreamWeaver");
            break;
        case 5:
            printf("ban chon RDBMS");
            break;
        case 6:
            printf("Ban chon Learn Java By Example");
            break;
        default:
            printf("Chon khong dung");


    }
    return 0;
}