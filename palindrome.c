#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    int n,i,rev=0,temp,l,r;
    printf("Enter a number: ");
    scanf("%d", &n);
    l = log10(n) + 1;
    temp = n;
    for(i = 0; i < l; i++)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    if(temp == rev)
    {
        printf("The number is a palindrome\n");
    }
    else
    {
        printf("The number is not a palindrome\n");
    }
    getch();
}