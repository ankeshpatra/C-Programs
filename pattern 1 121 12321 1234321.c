// pattern 1 121 12321 1234321

#include <stdio.h>
int main()
{
    int i,j,n,s;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(s=1;s<=(n-i);s++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(j=i;j>=2;j--)
        {
            printf("%d",j-1);
        }
        printf("\n");
    }
    return 0;
}