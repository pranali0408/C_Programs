#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,c=0;
    char ch = 'A';

    printf("\nEnter value for Pattern");
    scanf("%d",&c);

    printf("\n==========Pattern=========\n\n");

    for(i=1;i<=c;i++)
    {
           ch='A';
           for(j=1;j<=c;j++)
           {
                if(i==1 || j==1 || i==c || j==c)
                {
                    printf("%c",ch);
                }
                else
                {
                    printf(" ");
                }
                ch++;

           }
        printf("\n");
    }
    printf("\n==========Pattern=========\n\n");

    getch();
    return 0;
}

