//Program to input a day number and print the corresponding day name

#include <stdio.h>
int main()
{
    int n;
    printf("enter the number to get the day:");
    scanf("%d",&n);
    if(n==1)
    {
        printf("The day corresponds to no.%d is MONDAY",n);
    }
    else if (n==2)
    {
        printf("The day corresponds to no.%d is TUESDAY",n);
    }
    else if(n==3)
    {
        printf("The day corresponds to no.%d is WEDNESDAY",n);
    }
    else if(n==4)
    {
        printf("The day corresponds to no.%d is THRUSDAY",n);
    }
    else if(n==5)
    {
        printf("The day corresponds to no.%d is FRIDAY",n);
    }
    else if(n==6)
    {
        printf("The day corresponds to no.%d is SATURDAY",n);
    }
    else if(n==7)
    {
        printf("The day corresponds to no.%d is SUNDAY",n);
    }
    else
    {
        printf("INVALID INPUT, Enter a number between 1 to 7 !");
    }
    return 0;
    
}
