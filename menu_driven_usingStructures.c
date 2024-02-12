#include <stdio.h>
struct students
{
    char name[30];
    int avg;
    int roll_no;
    int m1,m2,m3;
};
void main()
{
    struct students s[100];
    int class_avg=0,n,i,sum=0;
    printf("Enter the number of students:");
    scanf("%d",&n);

    printf("\n******************************************************\n\n");

    for (i=0 ; i<n ; i++)
    {
        printf("Enter the name of %d student:",i+1);
        scanf("%s",s[i].name);
        fflush(stdin);
        printf("Enter the roll number of %d student:",i+1);
        scanf("%d",&s[i].roll_no);
        printf("Enter the %d student three subject marks:",i+1);
        scanf("%d %d %d",&s[i].m1,&s[i].m2,&s[i].m3);
    }

    printf("\n******************************************************\n\n");

    for (i=0 ; i<n ; i++)
    {
        s[i].avg = (s[i].m1 + s[i].m2 + s[i].m3)/3;
    }
    
    for (i=0 ; i<n ; i++)
    {
        sum = sum + s[i].avg;
    }

    class_avg = sum/n;

    printf("The class average is %d\n",class_avg);

    printf("\n******************************************************\n\n");

    printf("The Students scored above the class average are:\n\n");

    for (i=0 ; i<n ; i++)
    {
        if ( s[i].avg >= class_avg)
        {
            printf("%d\t",s[i].roll_no);
            puts(s[i].name);
            printf("\n");
        }
    }

    printf("\n******************************************************\n\n");

    printf("The Students scored below the class average are:\n\n");

    for (i=0 ; i<n ; i++)
    {
        if ( s[i].avg < class_avg)
        {
            printf("%d\t",s[i].roll_no);
            puts(s[i].name);
            printf("\n");
        }
    }
}
