//Program to print the pattern 1 23 456 78910

#include <stdio.h>
int main()
{
    int a,b,c=1;
    for(a=1;a<=4;a++)
    {
        for(b=1;b<=a;b++)
        {
            printf("%d ",c);
            c++;
        }
        printf("\n");
    }
    return 0;
}
