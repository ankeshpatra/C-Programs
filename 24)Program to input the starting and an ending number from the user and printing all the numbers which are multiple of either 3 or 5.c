//Program to input the starting and an ending number from the user and printing all the numbers which are multiple of either 3 or 5

#include <stdio.h>
int main()
{
    int a,b,i;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    for (i=a;i<=b;i++)
    {
        if(i%3==0)
        {
            printf("the number which are multiple of 3 are %d\n",i);
        }
        if(i%5==0)
        {
            printf("the number which are multiple of 5 are %d\n",i);
        }
    }
    return 0;
}
