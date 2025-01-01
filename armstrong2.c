// armstrong using for loop
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int n, i, sum = 0, temp, l, r;
    printf("Enter a number: ");
    scanf("%d", &n);
    l = log10(n) + 1;
    temp = n;
    for (i = 1; i <= l; i++)
    {
        r = n % 10;
        sum = sum + round(pow(r, l));
        n /= 10;
    }
    printf("The sum is %d\n", sum);
    if (temp == sum)
    {
        printf("The number is an armstrong number\n");
    }
    else
    {
        printf("The number is not an armstrong number\n");
    }
    return 0;
}