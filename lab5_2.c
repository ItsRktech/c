#include<Stdio.h>

int main()
{
    int n1,n2,temp,gcd,lcm;
    printf("Enter two numbers:");
    scanf("%d %d",&n1,&n2);
    if(n1>n2)
    {
         temp=n1;
    }
    else
    {
        temp=n2;
    }
    for(int i=1;i<=temp;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            gcd=i;
            lcm=(n1*n2)/gcd;
        }
    }
    printf("GCD of %d and %d is %d",n1,n2,gcd);
    printf("\nLCM of %d and %d is %d",n1,n2,lcm);
    return 0;
}