//Program to print the pattern(x-(x/2)+(x/3)-(x/4)+(x/5).....(x/n))

#include <stdio.h>
int main()
{
    int n,x,i;
    float s=0;
    printf("enter n :");
    scanf("%d",&n);
    printf("enter x :");
    scanf("%d",&x);
    for (i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            s-=(float)x/i;
        }
        else
        {
            s+=(float)x/i;
        }
    }
    printf("the result is %.2f",s);
    return 0;
}
