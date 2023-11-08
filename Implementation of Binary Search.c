//Implementation of Binary Search

#include<stdio.h>
int main()
{
    int size,i,count=0,key;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++)
    {
        printf("Enter the %d position element:",i+1);
        scanf("%d",&a[i]);
    }
    int length=sizeof(a)/sizeof(a[0]);
    printf("Enter the element to be searched:");
    scanf("%d",&key);
    for(i=0;i<length;i++)
    {
        if(a[i]==key)
        {
            printf("Element found at index %d",i+1);
            break;
        }
        else
        count++;
    }
    if(count>=length)
    printf("Element not found");
    return 0;
}