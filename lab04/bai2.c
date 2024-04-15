#include "stdio.h"
int bai2(){
//    int main(){
char c;
printf("Nhap ki tu trong bang chu cai:\n");
scanf("%c", &c);
if( 'A' <= c && c <= 'Z' )
    printf("%c la chu hoa.", c);
else if ('a' <= c && c <= 'z')
    printf("%c la chu thuong.", c);
else
    printf("Ki tu khong dung.");
return 0;
}