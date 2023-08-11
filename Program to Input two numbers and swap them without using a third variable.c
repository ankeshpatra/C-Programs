/*Program to Input two numbers and swap them without using a third variable*/

#include <stdio.h>
int main()
{
    int a,b;
    printf("enter the first (a)number:");
    scanf("%d",&a);
    printf("enter the second (b)number:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the swapped number are a=%d and b=%d",a,b);
    return 0;
}
