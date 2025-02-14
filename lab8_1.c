#include<stdio.h>

int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10},s=0;
    for(int i = 0;i<10;i++)
    {
        s+=*(a+i);
    }
    printf("The sum of the numbers is: %d\n", s);
    return 0;
}