#include "stdio.h"
#include "string.h"
#include "conio.h"
int example11_6(){
//    int main(){
    int i, n = 0, j;
    int item;
    char x[10][12];
    char temp[12];

    printf("Enter each string on a seperate line \n\n");
    printf("Type 'END' when over \n\n");

    do {
        printf("String %d: ", n+1);
        scanf("%s", x[n]);
        n++;
    }   while (strcmp(x[n-1], "END"));

    n = n-1;
    printf("\n Display n: %d\n", n);
    for (int j = 0; j < n; ++j) {
        printf("\t %s", x[j]);
    }

    for(item = 0; item < n-1; ++item){
    for(i = item + 1; i < n; ++i){
        if(strcmp(x[item], x[i]) > 0){
            strcpy(temp, x[item]);
            strcpy(x[item], x[i]);
            strcpy(x[i], temp);
            printf("\nInterchange x[%d] vs x[%d]\n", item, i);
            for (j = 0; j < n; ++j) {
                printf("\t %s", x[j]);
            }
        }
        else{
            printf("\nDont interchange x[%d] vs x[%d]\n", item, i);
            for (j = 0; j < n; ++j) {
                printf("\t %s", x[j]);
            }
        }
    }
}
    printf("\nRecorded list of strings: \n");
for(i = 0; i < n; ++i){
    printf("\nString %d is %s", i + 1, x[i]);
}
return 0;
}