#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    int num, rem, sum = 0, temp;
    printf("Enter a 3-digit number:");
    scanf("%d", &num);
    temp = num;
    while (num != 0)
    {
        rem = num % 10;
        sum = sum + (int)pow(rem, 3);
        num = num / 10;
    }
    if (sum == temp)
    {
        printf("%d is an Armstrong number.", temp);
    }
    else
    {
        printf("%d is not an Armstrong number.", temp);
    }
    getch();
}