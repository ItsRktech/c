#include<stdio.h>

int add(int a, int b)
{
    return a+b;
}

int subtract(int a, int b)
{
    return a-b;
}

int multiply(int a, int b)
{
    return a*b;
}

int divide(int a, int b)
{
    return a/b;
}

int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    printf("The sum of %d and %d is %d.\n",a,b,add(a,b));
    printf("The difference of %d and %d is %d.\n",a,b,subtract(a,b));
    printf("The product of %d and %d is %d.\n",a,b,multiply(a,b));
    printf("The quotient of %d and %d is %d.\n",a,b,divide(a,b));

    return 0;
}