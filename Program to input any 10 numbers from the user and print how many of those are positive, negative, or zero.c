//Program to input any 10 numbers from the user and print how many of those are positive, negative, or zero

#include <stdio.h>
int main()
{
    int num,i,p=0,n=0,z=0;
    printf("********** ENTER 10 NUMBERS **********\n");
    for (i=1;i<=10;i++)
    {
        printf("enter the %d number:",i);
        scanf("%d",&num);
        if (num>0)
        {
            p++;   
        }
        else if (num<0)
        {
            n++;    
        }
        else
        {
            z++;    
        }
    }
    printf("the number of positive number is %d",p);
    printf("\nthe number of negative number is %d",n);
    printf("\nthe number of zeros are %d",z);
    return 0;
}


