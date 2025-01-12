#include<stdio.h>

int main()
{
    int i;
    for(i=1;i<=9;i+=2)
    {
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}