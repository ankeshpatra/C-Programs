/* Program to Input the temperature from the user and convert it into Celsius to Fahrenheit or vice versa according to the user choice */

#include <stdio.h>
int main()
{
    float cel,faren,t;
    int a;
    printf("enter 1 for converting farenheit into celsius and 2 for converting celcius into farenheit:");
    scanf("%d",&a);
    printf("enter the temperature:");
    scanf("%f",&t);
    cel=(t-32)*0.56;
    faren=1.8*t+32;
    (a==1)?printf("the temperature is %.2f C",cel):(a==2)?printf("the temperature is %.2f F",faren):printf("INVALID INPUT !");
    return 0;
}
