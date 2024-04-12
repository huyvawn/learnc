//
// Created by vanminhthuy on 4/8/2024.
//

#include <stdio.h>
int score(){
//int main(){
int math,lit,eng,total;
printf("Enter math score:");
scanf("%d", &math);
printf("Enter literature score:");
 scanf("%d", &lit);
printf("Enter english score:");
scanf("%d",&eng);
total= (math+lit)*2 + eng;
printf("Your final score: %d\n", total);

if(total>=42){
    printf("You got excellent result");
}
if(total<25) {
        printf("You failed");
}
else{
    printf("You passed");
}
return 0;
}