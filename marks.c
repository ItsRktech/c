#include <stdio.h>
#include <conio.h>
void main()
{
    float marks[5], total = 0, percentage;
    char subjects[5][20]= {"Physics", "Chemistry", "Maths", "English", "Biology"};
    printf("Enter marks of physics, chemistry, maths, english, biology out of 100:\n");

    for(int i = 0; i < 5; i++)
    {
        printf("%s:-", subjects[i]);
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    percentage = total / 5;
    printf("\nRank for each subject:\n");

    for(int i = 0; i < 5; i++)
    {
        printf("%s:- ", subjects[i]);
        if(marks[i] < 40)
        {
            printf("Fail\n");
        }
        else if(marks[i] >= 40 && marks[i] < 55)
        {
            printf("Pass & Third division\n");
        }
        else if(marks[i] >= 55 && marks[i] < 65)
        {
            printf("Second division\n");
        }
        else if(marks[i] >= 65 && marks[i] < 80)
        {
            printf("First division\n");
        }
        else if(marks[i] >= 80 && marks[i] <= 95)
        {
            printf("Distinction\n");
        }
        else
        {
            printf("Extraordinary\n");
        }
    }

    printf("\nTotal marks = %.1f\n", total);
    printf("Percentage = %.1f%%\n", percentage);
    printf("Rank based on total marks:");

    if(percentage < 40)
    {
        printf("Fail\n");
    }
    else if(percentage >= 40 && percentage < 55)
    {
        printf("Pass & Third division\n");
    }
    else if(percentage >= 55 && percentage < 65)
    {
        printf("Second division\n");
    }
    else if(percentage >= 65 && percentage < 80)
    {
        printf("First division\n");
    }
    else if(percentage >= 80 && percentage <= 95)
    {
        printf("Distinction\n");
    }
    else
    {
        printf("Extraordinary");
    }
    getch();
}
