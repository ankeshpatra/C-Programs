//Program to check whether a number is armstong number or not.

#include <stdio.h>
void main()
{
    int a,num,rem,res=0;
    printf("enter a number:");
    scanf("%d",&num);
    a=num;
    while (num>0)
    {
        rem=num%10;
        res=res+(rem*rem*rem);
        num/=10;
    }
    if(res==a)
    printf("ITS AN ARMSTRONG NUMBER");
    else
    printf("ITS NOT AN ARMSTRONG NUMBER");
}