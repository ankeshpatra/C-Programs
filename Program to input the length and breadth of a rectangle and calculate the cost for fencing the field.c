//Program to input the length and breadth of a rectangle and calculate the cost of fencing the field

#include <stdio.h>
int main()
{
    int l,b,p,cost;
    char type;
    printf("enter the length of the rectangular field:");
    scanf("%d",&l);
    printf("enter the breadth of the rectangular field:");
    scanf("%d",&b);
    p=2*(l+b);
    printf("enter the type of field A/a or B/b:");
    scanf("%s",&type);
    if(type=='A' || type=='a')
    {
        cost=p*10;
        printf("the total cost for fencing the field: Rs.%d",cost);
    }
    else if(type=='B' || type=='b')
    {
        cost=p*15;
        printf("the total cost for fencing the field: Rs.%d",cost);
    }
    else
    {
        cost=p*12;
        printf("the total cost for fencing the field: Rs.%d",cost);
    }
    return 0;
    
}
