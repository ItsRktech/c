#include<stdio.h>
#include<conio.h>

int main()
{
    float C,F;
    printf("Enter the temperature in degree celsius:");
    scanf("%f",&C);
    F = 1.8 * C + 32;
    printf("The temperature in degree fahrenheit is %f.",F);
    getch();
    return 0;
}