//Patter of hollow rhombus

#include <stdio.h>
void main()
{
    int i,j,n;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(int s=1;s<=(n-i);s++)
        {
            printf(" ");
        }
        for(j=1;j<=n;j++)
        {
            if(i==1||i==n||j==1||j==n)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
}