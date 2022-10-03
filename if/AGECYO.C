#include<stdio.h>
#include<conio.h>
void main()
{
	int age;
	char gen;
	clrscr();
	printf("\nEnter your age : ");
	scanf("%d",&age);
	printf("\nEnter your gender [M/F] : ");
	fflush(stdin);
	scanf("%c",&gen);
	if(age<18)
	{
		if(gen=='m' || gen=='M')
		{
			printf("\nYour are male");
			printf("\nYour are child");
		}
		else if(gen=='f' || gen=='F')
		{
			printf("\nYour are female");
			printf("\nYour are child");
		}
		else
		{
			printf("\nInvalid");
		}
	}
	else if(age<50)
	{
		if(gen=='m' || gen=='M')
		{
			printf("\nYour are male");
			printf("\nYour are young");
		}
		else if(gen=='f' || gen=='F')
		{
			printf("\nYour are female");
			printf("\nYour are young");
		}
		else
		{
			printf("\nInvalid");
		}
	}
	else if(age>=50)
	{
		if(gen=='m' || gen=='M')
		{
			printf("\nYour are male");
			printf("\nYour are old");
		}
		else if(gen=='f' || gen=='F')
		{
			printf("\nYour are female");
			printf("\nYour are old");
		}
		else
		{
			printf("\nInvalid");
		}
	}
	getch();
}