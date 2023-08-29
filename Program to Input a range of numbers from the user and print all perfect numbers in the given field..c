//Input a range of number and print all perfect number in the given range.

#include <stdio.h>
int main()
{
    int s,e,i,j,sum;
    printf("enter a starting number:");
    scanf("%ld",&s);
    printf("enter an ending number:");
    scanf("%ld",&e);
    printf("the perfect numbers are:");
    for(i=s;i<=e;i++)
    {
        sum=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
                sum+=j;
            }
        }
        if(sum==i)
        {
            printf("%ld ",i);
        }
    }
    return 0;
    
}
