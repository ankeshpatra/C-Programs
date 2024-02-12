//Program to convert the digits to words and display the same

#include <stdio.h>
int main()
{
    char *ones[] = {"","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    char *teens[] = {"","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
    char *tens[] = {"","Ten","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninty"};
    int num;
    printf("Enter the Number:");
    scanf("%d",&num);
    if (num>=100)
    {
        printf("%s Hundred",ones[num/100]);
        num=num%100;
    }
    if (num>=20)
    {
        printf(" %s",tens[num/10]);
        num%=10;
    }
    else if (num>=10 && num<20)
    {
        printf(" %s",teens[num-10]);
    }
    if (num>=1 && num<10)
    {
        printf(" %s",ones[num]);
    }
    return 0;
}