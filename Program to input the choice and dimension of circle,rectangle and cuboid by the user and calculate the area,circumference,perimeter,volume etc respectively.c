//Program to input the choice and dimension of circle, rectangle, and cuboid by the user and calculate the area, circumference, perimeter, volume, etc respectively  

#include <stdio.h>
int main()
{
    float l,b,h,r,a,c,res;
    int ch1,ch2;
    printf("***********************");
    printf("\nPress 1-Rectangle");
    printf("\nPress 2-Circle");
    printf("\nPress 3-Cuboid");
    printf("\n***********************");
    printf("\nenter your choice:");
    scanf("%d",&ch1);
    switch (ch1)
    {
    case 1:
        printf("***********************");
        printf("\nProcessing Rectangle");
        printf("\nPress 1-Area");
        printf("\nPress 2-Perimeter");
        printf("\n***********************");
        printf("\nenter your choice for rectangle:");
        scanf("%d",&ch2);
        printf("\nenter the length of the rectangle:");
        scanf("%f",&l);
        printf("\nenter the breadth of the rectangle:");
        scanf("%f",&b);
        switch (ch2)
        {
            case 1:
                res=l*b;
                printf("******************************************");
                printf("the area of the rectangle is %.2f",res);
                printf("\n******************************************");
                break;
            case 2:
                res=2*(l+b);
                printf("******************************************");
                printf("the perimeter of the rectangle is %.2f",res);
                printf("\n******************************************");
                break;
            default:
                printf("******************************************");
                printf("Invalid Input for the execution of the rectangle !");
                printf("\n******************************************");
        }
        break;
    case 2:
        printf("*************************");
        printf("\nProcessing a Circle");
        printf("\nPress 1-Area");
        printf("\nPress 2-Circumference");
        printf("\n*************************");
        printf("\nenter your choice for circle:");
        scanf("%d",&ch2);
        printf("\nenter the radius of the circle:");
        scanf("%f",&r);
        switch (ch2)
        {
        case 1:
            res=3.14*r*r;
            printf("******************************************");
            printf("the radius of the circle is %.2f",res);
            printf("\n******************************************");
            break;
        case 2:
            res=2*3.14*r;
            printf("******************************************");
            printf("the circumference of the circle is %.2f",res);
            printf("\n******************************************");
            break;
        default:
            printf("******************************************");
            printf("Invalid Input for the execution of circle !");
            printf("\n******************************************");
        }
        break;
    case 3:
        printf("*********************************");
        printf("\nProcessing a Cuboid");
        printf("\nPress 1-Volume");
        printf("\nPress 2-Total Surface Area");
        printf("\nPress 3-Lateral Surface Area");
        printf("\nPress 4-Perimeter");
        printf("\n*********************************");
        printf("\nenter your choice for cuboid:");
        scanf("%d",&ch2);
        printf("\nenter the length of cuboid:");
        scanf("%f",&l);
        printf("enter the breadth of cuboid:");
        scanf("%f",&b);
        printf("enter the height of cuboid:");
        scanf("%f",&h);
        switch (ch2)
        {
        case 1:
            res=l*b*h;
            printf("******************************************");
            printf("the volume of the cuboid is %.2f",res);
            printf("\n******************************************");
            break;
        case 2:
            res=2*((l*b)+(b*h)+(l*h));
            printf("******************************************");
            printf("the total surface area of the cuboid is %.2f",res);
            printf("\n******************************************");
            break;
        case 3:
            res=2*h*(l+b);
            printf("******************************************");
            printf("the lateral surface area of the cuboid is %.2f",res);
            printf("\n******************************************");
            break;
        case 4:
            res=4*(l+b+h);
            printf("******************************************");
            printf("the perimeter of the cuboid is %.2f",res);
            printf("\n******************************************");
            break;
        default:
            printf("******************************************");
            printf("Invalid Input for the execution of the cuboid");
            printf("\n******************************************");
        }
        break;
    
    default:
        printf("INVALID INPUT !!!");
        break;
    }
    return 0;
}
