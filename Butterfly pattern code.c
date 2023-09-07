//Butterfly pattern code

#include <stdio.h>
void main()
{
    int i,j,s,r;
    printf("enter a number:");
    scanf("%d",&r);
     for(i=1;i<=r;i++)
    { 
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        for(s=1;s<=2*(r-i);s++)
        {
            printf(" ");
        }
        for(j=i;j>=1;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=r;i>=1;i--)
    { 
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        for(s=1;s<=2*(r-i);s++)
        {
            printf(" ");
        }
        for(j=i;j>=1;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}