/*Program to calculate electricity bill by taking input of the number of units consumed*/

#include <stdio.h>
int main()
{
    int units,bill;
    printf("enter the number of units consumed:");
    scanf("%d",&units);
    if (units<=200)
    {
        bill=units*0;
        printf("The total electricity bill is %d",bill);
    }
    if(units>200 && units<=400)
    {
        bill=units*4;
        printf("The charges are Rs.4 per unit and the total electricity bill is Rs.%d",bill);
    }
    if(units>400 && units<=700)
    {
        bill=units*6;
        printf("The charges are Rs.6 per unit and the total electricity bill is Rs.%d",bill);
    }
    if(units>700)
    {
        bill=units*8;
        printf("The charges are Rs.8 per unit and the total electricity bill is Rs.%d",bill);
    }
    return 0;
}
