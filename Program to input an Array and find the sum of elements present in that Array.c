//Program to input an Array and find the sum of elements present in that Array.

#include <stdio.h>
int main()
{
    int numArray[20],size,sum=0;
    printf("Enter the Size of the Array:");
    scanf("%d",&size);
    for (int i=0;i<size;i++)
    {
        printf("Enter the %d position Number:",i);
        scanf("%d",&numArray[i]);
    }
    for (int j=0;j<size;j++)
    {
        sum=sum+numArray[j];
    }
    printf("The Sum is %d ",sum);
    return 0;
}