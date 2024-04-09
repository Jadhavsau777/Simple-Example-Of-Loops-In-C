#include<stdio.h>
#include<conio.h>

void main()
{

   int i;
   clrscr();
   for(i=1;i<=5;i++)
   {
   int num,sum=0;
   printf("Enter Number");
   scanf("%d",&num);
   sum=sum+num;
   }
   printf("The Sum Of All Numbers Entered Is %d",sum);
   
   getch();
}