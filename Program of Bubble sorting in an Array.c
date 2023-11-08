//Program of Bubble sorting in an Array

#include <stdio.h>
int main()
{
    int size,i,j;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int array[size];
    for(i=0;i<size;i++)
    {
        printf("Enter the %d position element:",i+1);
        scanf("%d",&array[i]);
    }
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-1-i;j++)
        {
            if(array[j]>array[j+1])
            {
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    for ( i = 0; i < size; i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}