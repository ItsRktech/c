#include<stdio.h>
#include<conio.h>

void main()
{
    char gender;
    float sales,bonus;
    printf("Enter the gender of employee(M/F):\n");
    scanf("%c",&gender);
    printf("Enter the sales of employee:\n");
    scanf("%f",&sales);
    if(gender=='M')
    {
        if(sales<5000)
        {
            bonus=0.05*sales;
        }
        else
        {
            bonus=0.10*sales;
        }
        printf("The bonus of employee is %.2f",bonus);
    }
    else if(gender=='F')
    {
        if(sales<5000)
        {
            bonus=0.07*sales;
        }
        else
        {
            bonus=0.12*sales;
        }
        printf("The bonus of employee is %.2f",bonus);
    }
    else
    {
        printf("Invalid gender.\n");
    }
    getch();
    return 0;
}