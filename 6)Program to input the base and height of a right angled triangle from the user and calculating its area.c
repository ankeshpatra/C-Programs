/*Program to input the base and height of a right angled triangle from the user and calculating its area*/

#include <stdio.h>
int main()
{
    int b,h,a;
    printf("enter the base of the triangle:");
    scanf("%d",&b);
    printf("enter the height of the triangle:");
    scanf("%d",&h);
    a=b*h*0.5;
    printf("the area of the triangle is %d",a);
    return 0;
}
