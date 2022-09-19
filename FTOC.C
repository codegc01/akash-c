#include<stdio.h>
#include<conio.h>
void main()
{
	float c,f;
	clrscr();
	printf("Enter fahrenheit : ");
	scanf("%f",&f);
	c = ((f-32)*5)/9;
	printf("\ncelsius : %.2f",c);
	getch();
}