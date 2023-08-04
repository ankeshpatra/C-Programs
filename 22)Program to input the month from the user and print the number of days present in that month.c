//Program to input the month from the user and print the number of days present in that month

#include <stdio.h>
int main()
{
    int month;
    printf("enter the month:");
    scanf("%d",&month);
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("this month has 31 days");
        break;
    case 2:
        printf("this month has 28 days");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("this month has 30 days");
        break;
    
    default:
        printf("Please enter between 1-12 to know the number of days in that month");
        break;
    }
    return 0;
}
