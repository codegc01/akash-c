#include<stdio.h>
#include<conio.h>
void main()
{
	int num,i=1;
	clrscr();
	printf("\nEnter a number :");
	scanf("%d",&num);
	clrscr();
	do
	{
	printf("%d %d %d\n",num,i,i * num);
	i = i + 1;
	}while(i<=10);
	getch();
}