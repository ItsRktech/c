#include<stdio.h>
#include<string.h>

int main()
{
    // program to scan the name of 48 students of class and sort the names in alphabetical order and display the sorted list.
    char name[48][100], temp[100];
    int i, j;
    printf("Enter the names of 48 students of the class:\n");
    for(i=0; i<5; i++)
    {
        printf("Enter the name of student %d: ", i+1);
        scanf("%s", name[i]);
    }
    for(i=0; i<5; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(strcmp(name[i], name[j])>0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
    printf("The sorted list of names of 48 students of the class is:\n");
    for(i=0; i<5; i++)
    {
        printf("%s\n", name[i]);
    }
    return 0;
}