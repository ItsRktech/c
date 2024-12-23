#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    int a,b,c,r1,r2,d;
    printf("Enter the coefficients a,b and c:\n");
    scanf("%d%d%d",&a,&b,&c);

    d = pow(b,2) -4*a*c;

    if(d > 0)
    {
        r1 = (-b + sqrt(d))/2*a;
        r1 = (-b - sqrt(d))/2*a;
        printf("The roots are %d and %d.\n",r1,r2);
        printf("Roots are real and unequal.\n");
    }
    else if(d == 0)
    {
        r1 = (-b + sqrt(d))/2*a;
        r2 = (-b - sqrt(d))/2*a;
        printf("The roots are %d and %d.\n",r1,r2);
        printf("Roots are real and equal.\n");
    }
    else
    {
        printf("Roots are imaginary.\n");
    }
    getch();
    return 0;
}