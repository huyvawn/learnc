#include "stdio.h"
int check(float height,float weight,int appearance,int funny,int smart);
int say(char confess[]);
void Break();
void love();

int luyenHamBai7(){
//    int main(){
    float height,weight;
    int appearance,funny,smart;

    char confess[50];
    printf("\nLet's look for your love interest!");
    printf("\nHow tall do you want them to be?(cm): ");
    scanf("%f",&height);
    printf("\nAnd how about their weight?(kg): ");
    scanf("%f",&weight);
    printf("\nDo you require them to be pretty?:(1 for yes, 0 for no): ");
    scanf("%d",&appearance);
    printf("\nDo you want them to be funny(1 for yes, 0 for no): ");
    scanf("%d",&funny);
    printf("\nDo you want them to be smart(1 for yes, 0 for no): ");
    scanf("%d",&smart);
    if (1 == check(height,weight,appearance,funny,smart)){
        printf("\nThey are a match...");
        fflush(stdin);
        printf("\nType in to confess your love: ");
        scanf("%[^\n]s",confess);
    }
    else
        printf("\nSorry,no match.");
    if (1 == say(confess))
        love();
    else
        Break();
    return 0;
}

int check (float height,float weight,int appearance,int funny,int smart){
        //doi tuong 160 cm, 50kg, dep, vui tinh, thong minh.
        if((height>149 && height <171) && (weight>39 && weight < 61) && (appearance == 1 && smart == 1 && funny == 1))
            return 1;
        else
            return 0;
    }
int say(char confess[]){

    }