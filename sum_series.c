#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int n; 
    float y=1;

    for(n=1;n<=10;n++)
    {
        int is_Prime = 1;
        if(n<=1)
        {
            is_Prime = 0;
        }
        else
        {
            for(int i=2;i<=n/2;i++)
            {
                if(n%i==0)
                {
                    is_Prime = 0;
                    break;
                }
            }
        }
        if(is_Prime == 0)
        {
            int fact = 1;

            for(int j=1;j<=n;j++)
            {
                fact *= j;
            } 
        float sum = pow(n,2)/fact;
        y += sum;
        }
    }

    printf("The sum of the series excluding prime numbers is %.3f.",y);
    getch();
    return 0;
}