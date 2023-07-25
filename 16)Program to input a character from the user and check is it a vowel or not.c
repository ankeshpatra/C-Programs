//Program to input a character from the user and check is it a vowel or not

#include <stdio.h>
int main()
{
    char c,v,n;
    printf("enter a character:");
    scanf("%c",&c);
    v=(c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    n=(c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
    if (v||n)
    {
        printf("The character entered is a vowel");
    }
    else
    {
        printf("The character entered is a consonant");
    }
    return 0;
}
