#include<stdio.h>

int main()
{
    int array[] = {1,2,3,4,5,6,7,8,9,10},found  = 0,num;

    printf("Enter a number to search for: ");
    scanf("%d", &num);
    for(int i = 0; i < 10; i++)
    {
        if(*(array+i) == num)
        {
            found = 1;
            break;
        }
    }
    if(found)
    {
        printf("The number is found in the array.\n");
    }
    else
    {
        printf("The number is not found in the array.\n");
    }
    return 0;
}