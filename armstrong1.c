#include<stdio.h>
#include<conio.h>
#include<math.h>

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
    sum = pow(r1, 3) + pow(r2, 3) + pow(r3, 3);
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