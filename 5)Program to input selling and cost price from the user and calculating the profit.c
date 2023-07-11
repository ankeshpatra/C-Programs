/*Program to input selling and cost price from the user and calculating the profit (assuming only profit)*/

#include <stdio.h>
int main()
{
    /*assuming only profit to the user*/
    int cp,sp,p;
    printf("enter the selling price of the product:");
    scanf("%d",&sp);
    printf("enter the cost price of the product:");
    scanf("%d",&cp);
    p=sp-cp;
    printf("the profit to the user is %d",p);
    return 0;
}
