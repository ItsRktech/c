#include<stdio.h>

int main()
{
    int n1,n2,n3;
    printf("Enter 3 numbers:\n");
    scanf("%d %d %d",&n1,&n2,&n3);
    int *num1 = &n1, *num2 = &n2, *num3 = &n3;
    if(*num1>*num2 && *num1>*num3)
    {
        printf("The largest number is: %d\n", *num1);
    }
    else if(*num2>*num1 && *num2>*num3)
    {
        printf("The largest number is: %d\n", *num2);
    }
    else
    {
        printf("The largest number is: %d\n", *num3);
    }
}