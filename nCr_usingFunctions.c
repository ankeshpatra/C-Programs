//illustration of nCr using functions


#include <stdio.h>
int factorial(int a)
{
    int p=1,i;
    for(i=a;i>=1;i--)
    {
        p*=i;
    }
    return p;
}
int main()
{
    int n,r,fact;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter the value of r:");
    scanf("%d",&r);
    fact=factorial(n)/(factorial(r)*factorial(n-r));
    printf("the result is: %d",fact);
    return 0;
}

