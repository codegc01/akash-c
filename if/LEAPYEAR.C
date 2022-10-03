#include<stdio.h>
#include<conio.h>
void main()
{
	int year;
	clrscr();
	printf("\nEnter a year :");
	scanf("%d",&year);
	if(year%400==0 || year%4==0)
	{
		printf("\n%d is a leap year.");
	}
	else if(year%100==0)
	{
		printf("\n%d is a not leap year.");
	}
	else
	{
		printf("\n%d is a not leap year.");
	}
	getch();
}