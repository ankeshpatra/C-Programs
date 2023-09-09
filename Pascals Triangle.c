//Pascals Triangle

#include <stdio.h>
int main()
{
    int i,j,n,s,val;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(s=1;s<=(n-i);s++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            if (i==1||j==1)
            {
                val=1;
            }
            else
            {
                val=val*(i-j+1)/(j-1);
            }
            printf("%d ",val);
        }
        printf("\n");
    }
    return 0;
}