#include<stdio.h>

int main()
{
    int n1=0,n2=1,n3,i;
    printf("%d\t%d\t",n1,n2);
    for(i=2;i<15;i++)
    {
        n3=n1+n2;
        if(n3>300)
        {
            break;
        }
        printf("%d\t",n3);
        n1=n2;
        n2=n3;
    }
    return 0;
}