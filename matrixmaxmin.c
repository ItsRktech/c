#include<stdio.h>

int main()
{
    int r,c;
    printf("Enter the number of rows and columns of the matrix M:\n");
    scanf("%d %d",&r,&c);
    int M[r][c];
    printf("Enter the elements of the matrix M:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&M[i][j]);
        }
    }
    printf("The matrix M is:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",M[i][j]);
        }
        printf("\n");
    }
    int max = M[0][0],min = M[0][0];
    for(int i=0;i<r;i++)
    {
    	for(int j=0;j<c;j++)
    	{
    		if(M[i][j]>max)
			{
				max = M[i][j];
			}
            if(M[i][j]<min)
            {
                min = M[i][j];
            }		
		}
	}
	printf("The max element of matrix is %d.",max);
    printf("\nThe min element of matrix is %d.",min);
    printf("The matrix after substituting the max element in the main diagonal is:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==j)
            {
                M[i][j] = max;
            }
            printf("%d ",M[i][j]);
        }
        printf("\n");
    }
    printf("The matrix after substituting the min element in the main diagonal is:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==j)
            {
                M[i][j] = min;
            }
            printf("%d ",M[i][j]);
        }        
        printf("\n");
    }
    return 0;
}