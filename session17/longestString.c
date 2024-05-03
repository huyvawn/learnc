#include "stdio.h"
#include "string.h"
int longest(char line[][20]);
int longeststring(){
//    int main(){
        char line_arr[5][20];
        int longindex;
    for (int i = 0; i < 5; ++i) {
        printf("\nEnter line %d", i+1);
        scanf("%s",line_arr[i]);
    }
    longindex = longest(line_arr);
    printf("\nThe longest line is: %s",line_arr[longindex]);
    return 0;
}

int longest(char line_arr[][20]){
int maxlength= strlen(line_arr[0]);
int index=0,currentlength;
    for (int i = 0; i < 5; ++i) {
        currentlength= strlen(line_arr[i]);
        if (currentlength>maxlength){
            index=i;
        maxlength=currentlength;
        }
    }
    return index;
    }