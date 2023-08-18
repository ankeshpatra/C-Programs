//Program to print the pattern(x+x^2-x^3+x^4+x^5-x^6.....x^n)

#include <math.h>
#include <stdio.h>
int main()
{
    int x,n,s=0,i;
    printf("enter x :");
    scanf("%d",&x);
    printf("enter n :");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        if (i%3==0)
        {
            s-=pow(x,i);
        }
        else
        {
            s+=pow(x,i);
        }
    }
    printf("the result is %d",s);
    return 0;
}