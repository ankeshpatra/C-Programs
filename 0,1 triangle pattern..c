//0,1 triangle pattern.

#include <stdio.h>
void main()
{
    int a=1,b=0,i,j,n;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        // for(s=1;s<=(n-i);s++)
        // {
        //     printf(" ");
        // }
        for(j=1;j<=i;j++)
        {
            if((i+j)%2==0)
            {
                printf("%d ",a);
            }
            else
            printf("%d ",b);
        }
        printf("\n");
    }
}