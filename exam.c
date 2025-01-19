#include <stdio.h>
#include <math.h>

int main() {
    int j,k,i,count=0,f=1;
    float y=1;
    for(i=1;i<=10;i++)
    {
        count=0;
        for(k=1;k<=i;k++)
        {
            if(i%k==0)
            {
                count++;
            }
        }
        if(count!=2)
        {
            for(j=1;j<=i;j++)
            {
                f=f*j;
            }
            float sum=(pow(i,2)/f);
            y=y+sum;
        }
    }
    printf("The sum of the series excluding prime numbers is %.3f.\n", y);
    return 0;
}