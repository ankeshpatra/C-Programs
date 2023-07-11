/*Program to input cost and quantity of the product and calculating its amount and net amount providing discount also*/

#include <stdio.h>
int main()
{
    int c,q,a,d,na;
    printf("enter the cost of the product:");
    scanf("%d",&c);
    printf("enter the quantity of the product:");
    scanf("%d",&q);
    a=c*q;
    d=0.1*a;
    na=a-d;
    printf("the amount is %d\n",a);
    printf("the discount/cut provided is %d\n",d);
    printf("the net amount to be paid is %d\n",na);
    return 0;
}
