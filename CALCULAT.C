#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	char op;
	clrscr();
	printf("\nEnter first number :");
	scanf("%d",&a);
	printf("\nEnter operators:");
	scanf(" %c",&op);
	printf("\nEnter second number :");
	scanf("%d",&b);
	switch(op){
	case '+' :
		printf("\n%d + %d = %d",a,b,a+b);
		break;
	case '-' :
		printf("\n%d - %d = %d",a,b,a-b);
		break;
	case '*' :
		printf("\n%d * %d = %d",a,b,a*b);
		break;
	case '/' :
		printf("\n%d / %d = %.2f",a,b,(float)a/b);
		break;
	default:
		printf("\nThis is invalide '%c'",op);
		break;
		   }
	getch();
}