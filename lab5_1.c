#include<stdio.h>

int main()
{
    int n1,n2,s=0;
    printf("Enter two numbers:");
    scanf("%d %d",&n1,&n2);
    for(int i=n1+1;i<n2;i++)
    {
        if(i%2==0)
        {
            s=s+i;
        }
    }
    printf("Sum of even numbers between %d and %d is %d",n1,n2,s);
    return 0;  
}