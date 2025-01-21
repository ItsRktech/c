// finding permutation and combination of a given number using recursion

#include<stdio.h>

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}

float permutation(int n, int r)
{
    if(n<r)
    {
        return 0;
    }
    return factorial(n)/factorial(n-r);
}

float combination(int n, int r)
{
    if(n<r)
    {
        return 0;
    }
    return factorial(n)/(factorial(r)*factorial(n-r));
}

int main()
{
    int n,r;
    printf("Enter the value of n and r: ");
    scanf("%d %d",&n,&r);

    printf("Permutation of %d and %d is %.0f.\n",n,r,permutation(n,r));
    printf("Combination of %d and %d is %.0f.\n",n,r,combination(n,r));

    return 0;
}