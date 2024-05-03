#include "stdio.h"
void printMultiple(int n1,int n2);
int boiso50(){
//    int main(){
        int n1,n2;
        do{
    printf("\nNhap so n1: ");
    scanf("%d",&n1);
    printf("\nNhap so n2: ");
    scanf("%d",&n2);
    if(n1>=n2)
        printf("\nn1 phai nho hon n2.");
        }   while(n1>=n2);
    printMultiple(n1,n2);
    return 0;
}
void printMultiple(int n1, int n2){
    printf("\nCac so la boi so cua 50 trong khoang tu n1 den n2 nhu sau:\n");
    for (int i = n1; i <=n2 ; ++i) {
if (i%50 == 0)
    printf("%d\t",i);
    }

    }