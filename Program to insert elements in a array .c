//Program to insert elements in a array 

#include <stdio.h>
int main()
{
    int size,i,num,position;
    printf("Enter the size of the Array: ");
    scanf("%d",&size);
    int numArray[size];
    for(i=0;i<size;i++)
    {
        printf("Enter the %d position element:",i+1);
        scanf("%d",&numArray[i]);
    }
    printf("Enter the Number you want to insert in the Array: ");
    scanf("%d",&num);
    // printf("Enter the position u want to insert: ");
    // scanf("%d",&position);
    for(int j=size-1;j>=0;j--)
    {
        numArray[i+1]=numArray[i];
    }
    numArray[0]=num;
    printf("The Elements of the Array are :");
    for ( i = 0; i < size; i++)
    {
        printf("%d ",numArray[i]);
    }
    return 0;
}