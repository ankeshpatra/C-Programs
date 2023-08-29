//Program to print the pattern 5 44 333 2222 11111

#include <stdio.h>
int main()
{
    int a,b;
    for(a=5;a>=1;a--)
    {
        for(b=5;b>=a;b--)
        {
            printf("%d",a);
        }
        printf("\n");
    }
    return 0;
}
