#include <stdio.h>
int main()
{
	int row,cols;
	printf("Enter the row and column of both the matrix:");
	scanf("%d %d",&row,&cols);
	int a[row][cols],sum=0;
	printf("Enter the elements of the first matrix:");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<cols;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<cols;j++)
		{
			if(i==j)
			{
				sum+=a[i][j];
			}
		}
	}
	printf("The sum of the diagonal matrix is %d",sum);
	return 0;
	
}