//Program to input a number from the user and count the number of digits present in that entered number.

#include <stdio.h>
int main()
{
    int n,s=0,m;
    printf("enter a number:");
    scanf("%d",&n);
    m=n;
    for(;n>0;)
    {
        n=n/10;
        s++;
    }
    printf("the number of digits in %d is %d",m,s);
    return 0;
}
