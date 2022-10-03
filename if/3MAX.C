#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("\nEnter value of A :");
	scanf("%d",&a);
	printf("\nEnter value of B :");
	scanf("%d",&b);
	printf("\nEnter value of C :");
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("\n%d Value of A is max",a);
		}
		else
		{
			printf("\n%d Value of C is max",c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("\n%d Value of B is max",b);
		}
		else
		{
			printf("\n%d Value of C is max",c);
		}
	}
	getch();
}