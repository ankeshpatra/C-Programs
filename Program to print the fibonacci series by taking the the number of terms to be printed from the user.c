//Program to print the fibonacci series by taking the the number of terms to be printed from the user.

#include <stdio.h>
int main()
{
    int n,a=0,b=1,c=0,i;
    printf("enter how many terms you need:");
    scanf("%d",&n);
    printf("the fibonacci series is: \n");
    for(i=0;i<n;i++)
    {
        a=b;
        b=c;
        printf("%d ",c);
        c=a+b;
    }
    return 0;
}
