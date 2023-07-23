/*Program to input the three sides of a triangle and check whether its a euilateral triangle or not*/

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
    if(s1==s2 && s2==s3)
    {
        printf("The Triangle is an EQUILATERAL Triangle");
    }
    else if(s1==s2 || s2==s3 || s3==s1)
    {
        printf("The Triangle is an ISOSCELES Triangle");
    }
    else
    {
        printf("The Triangle is SCALENE Triangle");
    }
    return 0;
}
