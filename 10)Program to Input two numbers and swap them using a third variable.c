/*Program to Input two numbers and swap them using a third variable*/

#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the first (a)number:");
    scanf("%d",&a);
    printf("enter the second (b)number:");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("the swapped values are a=%d and b=%d",a,b);
    return 0;
}
