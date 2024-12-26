#include<stdio.h>
#include<conio.h>

void main()
{
    int t,hr,min,sec;
    printf("Enter the time in seconds:");
    scanf("%d",&t);

    hr = t / 3600;
    t = t % 3600;
    min = t / 60;
    t = t % 60;
    sec = t;
    printf("The time is %dhr %dmin %dsec.",hr,min,sec);
    getch();
    return 0;
}