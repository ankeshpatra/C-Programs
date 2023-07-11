/*Program to input radius of the circle from the user and calculate the area and circumference(only upto 2 decimal) */

#include <stdio.h>
int main()
{
    float r,a,c;
    printf("enter the radius of the circle:");
    scanf("%f",&r);
    a=3.14*r*r;
    c=2*3.14*r;
    printf("the area of the circle is %.2f\n",a);
    printf("the circumference of the circle is %.2f\n",c);
    return 0;
}
