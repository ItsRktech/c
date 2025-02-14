#include<stdio.h>

int main()
{
    int array1[5],array2[5];
    printf("Enter elements of array1:\n");
    for(int i = 0; i<5; i++)
    {
        scanf("%d", &array1[i]);
    }
    printf("Enter elements of array2:\n");  
    for(int i = 0; i<5; i++)
    {
        scanf("%d", &array2[i]);
    }
    printf("Before copying, the elements of array2 are:\n");
    for(int i = 0; i<5; i++)
    {
        printf("%d ", array2[i]);
    }
    int *ptr1 = array1, *ptr2 = array2;
    for(int i = 0; i<5; i++)
    {
        *(ptr2+i) = *(ptr1+i);
    }
    printf("The elements of array2 after copying are:\n");
    for(int i = 0; i<5; i++)
    {
        printf("%d ", *(ptr2+i));
    }
    return 0;
}