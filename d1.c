#include<stdio.h>

int main()
{
    int nsecs,hours,mins,secs;

    printf("Enter the number of seconds\n");
    scanf("%d",&nsecs);

    hours=nsecs/3600;
    mins=(nsecs%3600)/60;
    secs=(nsecs%3600)%60;

    printf("hours=%d\n",hours);
    printf("mins=%d\n",mins);
    printf("secs=%d\n",secs);

    return 0;



}