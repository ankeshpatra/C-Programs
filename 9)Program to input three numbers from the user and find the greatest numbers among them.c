/*Program to input three numbers from the user and find the greatest numbers among them*/

#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    printf("enter the third number:");
    scanf("%d",&c);
    (a>b && a>c)?printf("the greatest number is %d",a):(b>a && b>c)?printf("the greatest number is %d",b):printf("the greatest number is %d",c);
    return 0;
}
