//Program of fibonacci series using recurssion.

#include <stdio.h>
void fib(int a,int b,int n)
{
    int c=0;
    c=a+b;
    if (c>n)
        return;
    printf("%d\n",c);
    fib(b,c,n);
}
int main()
{
    int end,i=0;
    printf("Enter the ending number:");
    scanf("%d",&end);
    printf("%d\n",i);
    i++;
    printf("%d\n",i);
    fib(0,1,end);
    return 0;
}