#include<stdio.h>
#include<math.h>

int is_Prime(int n)
{
    if(n<=1)
    {
        return 0;
    }

    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int factorial(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    return n*factorial(n-1);
}

int main()
{
    int n;
    float y=1;
    for(n=1;n<=10;n++)
    {
        if(is_Prime(n)!=1)
        {
            int fact =factorial(n);
            float sum = pow(n,2)/fact;
            y+=sum;
        }
    }
    printf("The sum of the series is: %.3f\n",y);
    return 0;
}