//Program to input 10 characters from the user and count how many of those are upper case or lower case

#include <stdio.h>
int main()
{
    int u=0,l=0;
    int i;
    char ch;
    printf("********** ENTER 10 CHARACTERS **********\n");
    for (i=1;i<=10;i++)
    {
        printf("enter the %d character:",i);
        scanf(" %c",&ch);
        if (ch>=65 && ch<=90)
        {
            u++;
        }
        else if(ch>=97 && ch<=122)
        {
            l++;
        }
    }
    printf("the number of upper case is %d",u);
    printf("\nthe number of lower case is %d",l);
    return 0;
}