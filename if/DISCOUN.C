#include<stdio.h>
#include<conio.h>
void main()
{
	int p;
	clrscr();
	printf("\nEnter electricity bill amount : ");
	scanf("%d",&p);
	if(p>=5000)
	{
		printf("\n%d your discount ammount",p-500);
	}
	else if(p>=4000 && p<5000)
	{
		printf("\n%d your discount ammount",p-400);
	}
	else if(p>=3000 && p<4000)
	{
		printf("\n%d your discount ammount",p-300);
	}
	else if(p>=2000 && p<3000)
	{
		printf("\n%d your discount ammount",p-200);
	}
	else if(p>=1000 && p<2000)
	{
		printf("\n%d your discount ammount",p-100);
	}
	else
	{
		printf("\nEnter minimum ammount 1000");
	}
	getch();
}