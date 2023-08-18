//Program to find the roots of quadratic equation

#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,alpha,beta,d;
    printf("enter a,b,c:");
    scanf("%f %f %f",&a,&b,&c);
    
    d=b*b-4*a*c;
    if(d>0)
    {
        printf("the roots are real and distinct");
        alpha=(-b+sqrt(d))/(2*a);
        beta=(-b-sqrt(d))/(2*a);
        printf("\nthe roots are %.2f and %.2f",alpha,beta);
    }
    else if(d==0)
    {
        printf("the roots are real and equal");
        alpha=beta=(-b)/(2*a);
        printf("\nthe roots are alpha=beta=%.2f",alpha);
    }
    //d<0
    else
    {
        printf("the roots are imaginary and non-real i.e.,Quadratic is non-factorisable");
    }
    
    return 0;
}