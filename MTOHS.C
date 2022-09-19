#include<stdio.h>
#include<conio.h>
void main()
{
	int m;
	clrscr();
	printf("\nEnter total minutes:");
	scanf("%d",&m);
	printf("\nTotal hours = %d",m/60);
	printf("\nTotal minutes = %d",m);
	printf("\nTotal seconds = %d",m*60);
	getch();
}