//Program to check whether the number is pallindrome or not.

#include <stdio.h>
int main()
{
    int rev=0,n,m,num;
    printf("enter a number:");
    scanf("%d",&num);
    n=num;
    while (num>0)
    {
        m=num%10;
        rev=rev*10+m;
        num/=10;
    }
    if (rev==n)
    printf("ITS A PALLINDROME NUMBER");
    else
    printf("ITS IS NOT A PALLINDROME NUMBER");
    return 0;
}