#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    float a,b,c,r1,r2,d;
    float re,img;
    printf("Enter the coefficients a,b and c:\n");
    scanf("%f%f%f",&a,&b,&c);

    d = pow(b,2) -4*a*c;
    if(a == 0)
    {
        printf("The equation is not quadratic.");
    }
    else
    {
        if(d > 0)
    {
        r1 = (-b + sqrt(d))/(2*a);
        r2 = (-b - sqrt(d))/(2*a);
        printf("Roots are real and unequal.\n");
        printf("The roots are %.2f and %.2f.\n",r1,r2);
    }
    else if(d == 0)
    {
        r1 = (-b ) / (2 * a);
        printf("Roots are real and equal.\n");
        printf("The root is %.2f.\n",r1);
    }
    else
    {
        re = -b / (2 * a);
        img = sqrt(-d)/(2*a);
        printf("Roots are imaginary.\n");
        printf("The real part of root is %.2f and imaginary part is %.2fi.\n",re,img);

    }
    }
    getch();
    return 0;
}
    