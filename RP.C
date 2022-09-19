#include<stdio.h>
#include<conio.h>
void main()
{
	int r,p;
	clrscr();
	printf("\nEnter total rupee:");
	scanf("%d",&r);
	printf("\nTotal paisa = %d",r*100);





	printf("\nEnter total paisa:");
	scanf("%d",&p);
	printf("\nTotal rupee = %d",p/100);
	getch();
}