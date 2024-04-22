#include "stdio.h"
#include "string.h"
#include "conio.h"
int tryityourself(){
//    int main(){
    char arr[7][10],temp[10];
    int i=0,j,n=0;
    do {
        printf("Enter name %d: ", n+1 );
        scanf("%s", arr[n]);
        n++;
    } while(n < 7);

    for ( i = 0; i < n-1; ++i) {
        for (j = i+1; j < n; ++j) {
            if(strcmp(arr[i],arr[j])>0){
                strcpy(temp,arr[i]);
                strcpy(arr[i],arr[j]);
                strcpy(arr[j],temp);
            }
        }
    }
    printf("Rearranged list is:\n");
    for (int k = 0; k < 7; ++k) {
        printf("%s\n",arr[k]);
    }
    return 0;
}