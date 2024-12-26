#include<stdio.h>
#include<conio.h>

void main()
{
    int l, km, m, cm;
    printf("Enter the length in cm:");
    scanf("%d",&l);

    km = l / 100000;
    l = l % 100000;
    m = l / 100;
    l = l % 100;
    cm = l;
    printf("The length is %dkm %dm %dcm.",km,m,cm);
    getch();
    return 0;
}