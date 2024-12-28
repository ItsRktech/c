#include<stdio.h>
#include<conio.h>

void main()
{
    int num, temp, r1, r2, r3, sum;
    printf("Enter a 3-digit number:");
    scanf("%d", &num);
    temp = num;
    r1 = num % 10;
    num = num / 10;
    r2 = num % 10;
    r3 = num/10;
    sum = r1 * 100 + r2 * 10 + r3;
    if (sum == temp)
    {
        printf("%d is palindrome.", temp);
    }
    else if (sum != temp)
    {
        printf("%d is not palindrome.", temp);
    }
    else
    {
        printf("Invalid input.");
    }
    getch();
}