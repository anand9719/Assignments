// Write a program to calculate the difference between two time periods
#include<stdio.h>
#include<math.h>
struct time
{
    int hour,min,sec;
}t1,t2,d;
int main()
{
    printf("Enter start time:\n");
    scanf("%d:%d:%d",&t1.hour,&t1.min,&t1.sec);
    fflush(stdin);
    printf("Enter end time:\n");
    scanf("%d:%d:%d",&t2.hour,&t2.min,&t2.sec);
    if(t2.sec > t1.sec)
    {
        --t1.min;
        t1.sec += 60;
    }
    else if(t1.sec > t2.sec)
    {
        --t2.min;
        t2.sec += 60;
    }
    d.sec = abs(t1.sec-t2.sec);
    if(t2.min > t1.min)
    {
        --t1.hour;
        t1.min += 60;
    }
    else if(t1.min > t2.min)
    {
        --t2.hour;
        t2.min += 60;
    }
    d.min = abs(t1.min-t2.min);
    d.hour = abs(t1.hour-t2.hour);
    printf("Difference between two time periods is %d:%d:%d",d.hour,d.min,d.sec);
    return 0;
}