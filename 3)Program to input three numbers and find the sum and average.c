/* Program to input three numbers and find the sum and average */

#include <stdio.h>
int main()
{
    int a,b,c,sum,avg;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    printf("enter the third number:");
    scanf("%d",&c);
    sum=a+b+c;
    avg=sum/3;
    printf("the sum of three numbers is %d\n",sum);
    printf("the average of the three numbers is %d\n",avg);
    return 0;
}
