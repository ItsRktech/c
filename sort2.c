#include<stdio.h>
#include<string.h>

int main()
{
    // program to scan the string and sort the chracters of strings in alphabetical order and display the sorted string.
    char str[1000], temp;
    int i, j;
    printf("Enter a string: ");
    scanf("%s", str);
    int n = strlen(str);
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(str[i]>str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    printf("The sorted string is %s.\n", str);
    return 0;
}