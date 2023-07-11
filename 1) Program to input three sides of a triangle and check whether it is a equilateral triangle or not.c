/* Program to input three sides of a triangle and check whether it is a equilateral triangle or not */

#include <stdio.h>
int main()
{
    int s1,s2,s3;
    printf("enter the first side of the triangle:");
    scanf("%d",&s1);
    printf("enter the second side of the triangle:");
    scanf("%d",&s2);
    printf("enter the third side of the triangle:");
    scanf("%d",&s3);
    (s1==s2 && s2==s3 && s1==s3)? printf("the triangle is an equilateral triangle !"):printf("the triangle is not an equilateral triangle !");
    return 0;
}
