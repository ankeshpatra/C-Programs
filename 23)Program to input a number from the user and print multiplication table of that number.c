//Program to input a number from the user and print multiplication table of that number

#include <stdio.h>
int main()
{
    int n,i,k;
    printf("enter a number:");
    scanf("%d",&n);
    for ( i = 1; i <=10; i++)
    {
        k=n*i;
        printf(" %d x %d = %d \n",n,i,k);
    }
    return 0;
}
