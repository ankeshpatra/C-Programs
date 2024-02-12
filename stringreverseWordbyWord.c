//Program to reverse a string word by word

#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],res[100]="",word[100];
    int i,j=0;
    printf("Enter the string:");
    gets(str);
    printf("The original string is %s\n",str);
    strrev(str);
    strcat(str," ");
    for(i=0;str[i]!='\0';i++)
    {
        if (str[i]==' ')
        {
            word[j]='\0';
            strrev(word);
            strcat(res,word);
            strcat(res," ");
            j=0;
        }
        else 
        {
            word[j]=str[i];
            j++;
        }
    }
    printf("The reversed string is:");
    puts(res);
    return 0;
}