//Program to print the sum factorial pattern(1!+2!+3!+....+n!)

#include <stdio.h>
int main()
{
    int n,s=0,fact=1,i;
    printf("enter a number :");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        fact*=i;
        s+=fact;
    }
    printf("the sum of factorial is %d",s);
    return 0;
}