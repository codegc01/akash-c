#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("\nEnter value of A : ");
	scanf("%d",&a);
	printf("\nEnter value of B : ");
	scanf("%d",&b);
	if(a<b)
	{
		printf("\nValue of A is minimux");
	}
	else
	{
		printf("\nValue of B is minimux");
	}
	getch();
}