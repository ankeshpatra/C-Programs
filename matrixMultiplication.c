//Program to find the matrix multiplication

#include <stdio.h>
int main()
{
    int r1, c1, r2, c2;
    printf("Enter the row of first matrix:");
    scanf("%d", &r1);
    printf("Enter the column of first matrix:");
    scanf("%d", &c1);
    printf("\n**************************************\n");
    printf("Enter the row of second matrix:");
    scanf("%d", &r2);
    printf("Enter the column of second matrix:");
    scanf("%d", &c2);
    int a[r1][c1], b[r2][c2], i, j, k, c[100][100];
    if (c1 != r2)
    {
        printf("multiplication not possible");
    }
    else
    {
        printf("************************************\n");
        printf("Enter the first Matrix Elements:");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("************************************\n");
        printf("Enter the Second Matrix Elements:");
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        printf("*************************************\n");
        for(i=0;i<r1;i++)
        {
            printf("\n");
            for(j=0;j<c2;j++)
            {
                c[i][j]=0;
                for(k=0;k<c1;k++)
                {
                    c[i][j]+=(a[i][k]*b[k][j]);
                }
                printf("%d\t",c[i][j]);
            }
        }
    }
    return 0;
}