#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,j=0,c=0;
    printf("\nEnter Column values for N Pattern :");
    scanf("%d",&c);

    printf("\n==========Pattern==========\n\n");

        for(i=1;i<=c;i++)
        {
            for(j=1;j<=c;j++)
            {
                if(j==1 || j==c || i==j)
                {
                    printf("$");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }

    printf("\n==========Pattern==========\n\n");

    getch();
    return 0;
}



