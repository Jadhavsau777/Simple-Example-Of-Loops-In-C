#include<stdio.h>
#include<conio.h>

void main()
{

   int i,sum=0;
   clrscr();
   printf("Enter Any Number\n");
   for(i=1;i<=5;i++)
   {
   int num;
   scanf("%d",&num);
   sum=sum+num;
   }
   printf("The Sum Of All Numbers Entered Is %d",sum);
   

   getch();
}  