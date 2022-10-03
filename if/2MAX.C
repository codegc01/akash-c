#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("\nEnter value of A :");
	scanf("%d",&a);
	printf("\nEnter value of B :");
	scanf("%d",&b);
	if(a>b)
	{
		printf("\n%d Value of A is max",a);
	}
	else
	{
		printf("\n%d Value of B is max",b);
	}
	getch();
}