#include<stdio.h>

int square(int a)
{
    int s = a*a;
    return s;
}

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    int s = square(a);
    printf("The square of the number is: %d\n",s);
    return 0;
}