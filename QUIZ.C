#include<stdio.h>
#include<conio.h>
void main()
{
	int s;
	clrscr();
	printf("\n\t\t  ||||||||||KON HAI BADA AKALMAND||||||||||");
	printf("\n\n********************************************************************************");
	printf("\n\t\t\t\t    PRESENTED BY AKASH DABHI AND BURHAN MAKDA...");
	printf("\n\n\nPRESS ANY KEY TO START THE GAME...");
	getch();
	clrscr();
	printf("\n\t\t  ||||||||||KON HAI BADA AKALMAND||||||||||");
	printf("\n\n********************************************************************************");
	printf("\n\t\t\t\t    PRESENTED BY AKASH DABHI AND BURHAN MAKDA...");
	printf("\n\n\n0.EXIT\n1.START");
	printf("\n\nENTER YOUR CHOICE...  ");
	scanf("%d",&s);
	switch(s)
	{
		case 0:
			break;
		case 1:
			clrscr();
			printf("\n\t\t  ||||||||||KON HAI BADA AKALMAND||||||||||");
			printf("\n\n********************************************************************************");
			printf("\n\t\t\t\t    PRESENTED BY AKASH DABHI AND BURHAN MAKDA...");
			getch();
			main();
		default :
			clrscr();
			printf("\n\t\t  ||||||||||KON HAI BADA AKALMAND||||||||||");
			printf("\n\n********************************************************************************");
			printf("\n\t\t\t\t    PRESENTED BY AKASH DABHI AND BURHAN MAKDA...");
			printf("\n\n\nINVALID OPTION");
			printf("\n\nPRESS ANY KEY TO GO TO MAIN MENU");
			getch();
			main();
	}
}