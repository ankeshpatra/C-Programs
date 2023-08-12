//Program to input two numbers from the user and print their product without using multiplication symbol

#include <stdio.h>
int main()
{
    int a,b,p=0,i;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    for (i=1;i<=b;i++)
    {
        p+=a;
    }
    printf("the product of %d and %d is %d",a,b,p);
    return 0;
}