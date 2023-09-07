//Palindromic Pyramid


#include <stdio.h>
void main()
{
    int i,j,s,n;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(s=1;s<=(n-i);s++)
        {
            printf(" "); 
        }
        for(j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        for(j=2;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}