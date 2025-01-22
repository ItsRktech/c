#include<stdio.h>
#include<conio.h>

void main()
{
    int n,f=1,temp;
    printf("Enter a number:\n");
    scanf("%d",&n);
    temp=n;
    while(n>=1)
    {
        f = f * n;
        n--;
    }
    printf("The factorial of %d is %d.",temp,f);
    getch();    
    return 0;
}    