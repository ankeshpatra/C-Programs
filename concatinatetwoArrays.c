// Program to concatinate two arrays

#include <stdio.h>
int main()
{
    int size1,size2;
    printf("Enter the size of first array:");
    scanf("%d",&size1);
    printf("Enter the size of second array:");
    scanf("%d",&size2); 
    int a[100],b[100];
    int i,j;
    printf("Enter the Elements of 'a' array:");
    for (i=0;i<size1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the Elements of 'b' array:");
    for (i=0;i<size2;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=size1,j=0; j<size2 ;i++,j++)
    {
        a[i]=b[j];
    }
    printf("The concanicated array is :");
    for(i=0 ; i<(size1+size2) ; i++)
    {
        printf("%3d,",a[i]);
    }
    return 0;
}