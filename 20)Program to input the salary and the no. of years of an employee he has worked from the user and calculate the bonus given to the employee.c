//Program to input the salary and the no. of years of an employee he has worked from the user and calculate the bonus given to the employee

#include <stdio.h>
int main()
{
    int salary,years,bonus;
    printf("enter the salary of the employee:");
    scanf("%d",&salary);
    printf("enter the number of years the employee worked:");
    scanf("%d",&years);
    if(salary>=5000)
    {
        if(years>5)
        {
            bonus=salary*0.8;
        }
        else if(years==5)
        {
            bonus=salary*0.6;
        }
        else if(years<5)
        {
            bonus=salary*0.5;
        }
        printf("The Bonus to the employee is Rs.%d",bonus);
    }
    else
    {
        printf("The employee salary is less than Rs.5000,");
        printf("Thus not eligible for bonus");
    }
    return 0;
}
