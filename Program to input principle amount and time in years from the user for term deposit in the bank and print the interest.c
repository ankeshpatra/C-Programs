//Program to input principle amount and time in years from the user for term deposit in the bank and print the interest

#include <stdio.h>
int main()
{
    float rate, pa;
    int t;
    printf("enter the principle amount:");
    scanf("%f",&pa);
    printf("enter the time in years:");
    scanf("%d",&t);
    if(t<=2)
    {
        rate=4*pa/100;
    }
    else if (t>2 && t<=4)
    {
        rate=6*pa/100;
    }
    else if (t>4)
    {
        rate=7*pa/100;
    }
    printf("The interest earned over the amount deposited = Rs.%.2f",rate);
    return 0;
}









