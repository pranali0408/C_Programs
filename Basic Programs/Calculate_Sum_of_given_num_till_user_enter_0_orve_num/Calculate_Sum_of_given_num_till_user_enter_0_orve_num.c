#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int No = 0, Sum =0, Cnt =0;
    
    printf ("\nEnter Numbers to calculate Their Sum\n(Will Stop Summation After 0/-ve Input)=>");
    
   for(Cnt=1;Cnt<=10;Cnt++)
    {
       printf("\n\t Enter Number%d",Cnt);
       scanf("%d",&No);
       if(No<=0)
        {
          break;
        }
       Sum =Sum+No;
    }
    
    printf ("\nPres Any Key to get Summation of a Given Number=");
    
    system ("cls");
    
    printf ("\nSummation of Given Number=%d",Sum);
    scanf("%d",&Sum);
    
    printf("\nThanks!!!");
    getch();
    return 0;
}