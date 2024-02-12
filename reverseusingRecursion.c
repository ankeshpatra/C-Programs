//Reverse of a number using recursion

#include <stdio.h>
int pall(int);
int rev=0;
void main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int reverse=pall(n);
    printf("The reversed number is %d",reverse);
}
int pall(int num)
{
    if(num!=0)
    {
        int m=num%10;
        rev = rev*10+m;
        pall(num/10);
    }
    else
        return rev;
}