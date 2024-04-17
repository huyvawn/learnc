#include "stdio.h"
int viduBreak()
//    int main ()
{
        int count1, count2;
        for(count1 = 1;count1 <=100; count1++)
        {
            printf("Enter %d count2 : ",count2);
            scanf("%d", &count2);
            if(count2==100)
                break;
        }
        return 0;
}