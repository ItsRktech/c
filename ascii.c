#include<stdio.h>
#include<conio.h>

void main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    printf("The ASCII value of %c is %d.",ch,ch);
    getch();
    return 0;
}