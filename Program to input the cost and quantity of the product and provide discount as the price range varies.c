/*Program to input the cost and quantity of the product and provide a discount as the price range varies*/

#include <stdio.h>
int main()
{
    int cost,q,d,a,na;
    printf("enter the cost of the product:");
    scanf("%d",&cost);
    printf("enter the quantity of the product:");
    scanf("%d",&q);
    a=cost*q;
    printf("the amount is Rs.%d",a);
    if(a<=1000)
    {
        d=a*0;
        na=a-d;
        printf("\nthe discount offered is Rs.%d",d);
        printf("\nthe net amount to be paid after discount = Rs.%d",na);
    }
    if(a>1000 && a<=2999)
    {
        d=0.1*a;
        na=a-d;
        printf("\nthe discount offered is Rs.%d",d);
        printf("\nthe net amount to be paid after discount = Rs.%d",na);
    }
    if(a>=3000 && a<=4999)
    {
        d=a*0.2;
        na=a-d;
        printf("\nthe discount offered is Rs.%d",d);
        printf("\nthe net amount to be paid after discount = Rs.%d",na);
    }
    if(a>=5000)
    {
        d=a*0.3;
        na=a-d;
        printf("\nthe discount offered is Rs.%d",d);
        printf("\nthe net amount to be paid after discount = Rs.%d",na);
    }
    return 0;
}
