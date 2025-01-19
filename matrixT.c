#include<stdio.h>

int main()
{
    int M[2][3],T[3][2];
    printf("Enter the elements of the matrix M:\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&M[i][j]);
        }
    }
    printf("The matrix M is:\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",M[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            T[j][i] = M[i][j];
        }
    }
    printf("The transpose of the matrix M is:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",T[i][j]);
        }
        printf("\n");
    }
    return 0;
}