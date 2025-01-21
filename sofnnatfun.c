// Sum of first 50 natural numbers using function

#include<stdio.h>

int sum(int n)
{
    if(n<=1)
    {
        return 1;
    }

    return n+sum(n-1);
}

int main()
{
    int n = 50;
   int result = sum(n);

    printf("The sum of first %d natural numbers is %d.",n,sum(n));

    return 0;
}