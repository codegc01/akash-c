#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e,n,o;
	clrscr();
	printf("1.Calculator\n2.Squre and Cube\n3.find max number\n4.Odd Even number\n");
	printf("5.Exit");
	printf("\nSelect options:");
	scanf("%d",&n);
	switch(n){
	case 1:
		clrscr();
		printf("\t\t\t\tCalculator");
		printf("\nPress any key to go to main menu");
		getch();
		main();
	case 2:
		clrscr();
		printf("1.Squre\n2.Cube");
		printf("\nSelect options: ");
		scanf("%d",&o);
		switch(o)
			{
			case 1:
				clrscr();
				printf("\nSqure\n");
				printf("\nEnter number: ");
				scanf("%d",&a);
				//clrscr();
				printf("\nSqure %d = %d",a,a*a);
				printf("\nPress any key to go to main menu");
				getch();
				main();
			case 2:
				//clrscr();
				printf("\nCube\n");
				printf("\nEnter number: ");
				scanf("%d",&a);
				//clrscr();
				printf("\nCube %d = %d",a,a*a*a);
				printf("\nPress any key to go to main menu");
				getch();
				main();
			default :
				clrscr();
				printf("\nThis is a invalide %d option",o);
				printf("\nPress any key to go to main menu");
				getch();
				main();
			}
		main();

	case 3:
		clrscr();
		printf("\n\t\t\t\tFind max number\n");
		printf("1.two number\n2.three number\n");
		printf("Select option: ");
		scanf("%d",&d);
		switch(d)
		{
		case 1:
			clrscr();
			printf("\nFind maximum number between two numbers");
			printf("\nEnter value of A: ");
			scanf("%d",&a);
			printf("\nEnter value of B: ");
			scanf("%d",&b);
			if (a > b)
			{
			clrscr();
			printf("\n%d this value is a big",a);
			}
			else if (a==b)
			{
			clrscr();
			printf("\nThis value is a same %d and %d",a,b);
			}
			else
			{
			//clrscr();
			printf("\n%d this value is a big",b);
			}
			printf("\nPress any key to go to main menu");
			getch();
			main();
		case 2:
			clrscr();
			printf("Find maximum number between two numbers");
			printf("\nEnter value of A: ");
			scanf("%d",&a);
			printf("\nEnter value of B: ");
			scanf("%d",&b);
			printf("\nEnter value of C: ");
			scanf("%d",&c);
			if (a>b)
			{
				if (a>c)
				{
					//clrscr();
					printf("%d A is big value",a);
				}
				else
				{
					//clrscr();
					printf("%d C is big value",c);
				}
			}
			else
			{
				if (b>c)
				{
					//clrscr();
					printf("%d B is big value",b);
				}
				else
				{
					//clrscr();
					printf("%d C is big value",c);
				}
			}

			printf("\nPress any key to go to main menu");
			getch();
			main();

		default :
			clrscr();
			printf("This is a invalid options %d",d);
			printf("\nPress any key to go to main menu");
			getch();
			main();
		}
		main();
	case 5:
		exit();

	default :
		clrscr();
		printf("\nThis is a invalide %d option",n);
		printf("\nPress any key to go to main menu");
		getch();
		main();
		}
		//getch();
}