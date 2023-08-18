//Program to print the "n*x" pattern(x+2x+3x+.....+nx)

#include <stdio.h>
int main()
{
    int n,x,s=0,i,p;
    printf("enter n :");
    scanf("%d",&n);
    printf("enter x :");
    scanf("%d",&x);
    for (i=1;i<=n;i++)
    {
        p=i*x;
        s+=p;
    }
    printf("the result is %d",s);
    return 0;
}