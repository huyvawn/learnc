#include "stdio.h"

int bai1() {
//    int main(){
    char character;
    printf("Nhap ki tu tu ban phim:\n");
    character = getchar();
    printf("Ki tu ban da nhap: %c\n", character);
    printf("Ma ASCII: %d", character);
    return 0;
}
