#include "stdio.h"
int lab5_04(){
// int main(){
    char c;
   do {
       fflush(stdin);
       printf("\nNhap mot ki tu: ");
       scanf("%c", &c);
       if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))
           printf("\n%c la chu cai", c);
       else if('0' <= c && c<= '9')
           printf("\n%c la chu so", c);
       else if(c == ' ')
           printf("\nKet thuc.");
       else
           printf("\n%c la ki tu dac biet.", c);
   } while (c != ' ');
    return 0;
}