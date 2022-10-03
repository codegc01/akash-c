#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("\nEnter value of A : ");
	scanf("%d",&a);
	printf("\nEnter value of B : ");
	scanf("%d",&b);
	printf("\nEnter value of C : ");
	scanf("%d",&c);
	if(a<b)
	{
		if(a<c)
		{
			printf("\nValue of A is minimum");
		}
		else
		{
			printf("\nValue of C is minimum");
		}
	}
	else
	{
		if(b<c)
		{
			printf("\nValue of B is minimum");
		}
		else
		{
			printf("\nValue of C is minimum");
		}
	}
	getch();
}