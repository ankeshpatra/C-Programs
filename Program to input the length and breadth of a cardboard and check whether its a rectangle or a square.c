/* Program to input the length and breadth of cardboard and check whether it's a rectangle or a square */

#include <stdio.h>
int main()
{
    int l,b;
    printf("enter the length of the cardboard:");
    scanf("%d",&l);
    printf("enter the breadth of the cardboard:");
    scanf("%d",&b);
    (l==b)?printf("the cardboard is square in shape !"):printf("the cardboard is rectangle in shape !");
    return 0;
}
