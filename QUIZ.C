#include<stdio.h>
#include<conio.h>
void main()
{
	int o; //option
	char name[30];//ENTER NAME
	//FOR QUIZ GAME FOR VARIABLE
	int q,m,p,s=1,t=0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10;
	char ans;
	clrscr();
	printf("\n\t\t  ||||||||||KON HAI BADA AKALMAND||||||||||");
	printf("\n********************************************************************************");
	printf("\n\t\t\t\t    PRESENTED BY AKASH DABHI AND BURHAN MAKDA...");
	printf("\n\n\nPRESS ANY KEY TO START THE GAME...");
	getch();
	op:
		s=1;
		t=0;
		t1=0;
		t2=0;
		t3=0;
		t4=0;
		t5=0;
		t6=0;
		t7=0;
		t8=0;
		t9=0;
		t10=0;
		clrscr();
		printf("\n\t\t  ||||||||||KON HAI BADA AKALMAND||||||||||");
		printf("\n********************************************************************************");
		printf("\n\t\t\t\t    PRESENTED BY AKASH DABHI AND BURHAN MAKDA...");
		printf("\n\n\n0.EXIT\n1.START");
		printf("\n\n	....  ");
		scanf("%d",&o);
	switch(o)
	{
		case 0:
			exit();
		case 1:
			clrscr();
			printf("\n\t\t  ||||||||||KON HAI BADA AKALMAND||||||||||");
			printf("\n********************************************************************************");
			printf("\n\t\t\t\t    PRESENTED BY AKASH DABHI AND BURHAN MAKDA...");
			printf("\n\n\nEnter your name...");
			fflush(stdin);
			scanf("%s",&name);
			clrscr();
			printf("\n\t\t  ||||||||||KON HAI BADA AKALMAND||||||||||");
			printf("\n\n********************************************************************************");
			printf("\n\t\t\t\t    PRESENTED BY AKASH DABHI AND BURHAN MAKDA...");
			printf("\n\n\nWELCOME %s TO THE KON HAI BADA AKALMAND...",name);
			printf("\n\n\nPRESS ANY KEY TO START FIRST QUISTION...");
			getch();
			clrscr();
			switch(s)
			{
				case 1:
					printf("\n\t\t  ||||||||||KON HAI BADA AKALMAND||||||||||");
					printf("\n\n********************************************************************************");
					printf("\n\t\t\t\t    PRESENTED BY AKASH DABHI AND BURHAN MAKDA...");
					printf("\n\n\t\t\t\t\t\t%s YOUR TOTAL MARKS = %d",name,t);
					printf("\n\nQ1.WHICH RIVER IS LONGEST IN INDIA\?");
					printf("\nA...INDUS");
					printf("\nB...GODAVARI");
					printf("\nC...YAMUNA");
					printf("\nD...BRAHMAPTRA");
					printf("\n...");
					fflush(stdin);
					scanf("%c",&ans);
					if(ans=='a' || ans=='A')
					{
						t++;
						t1=1;
						printf("\nCONGRATULATIONS YOUR ANSWER IS RIGHT...");
						getch();
					}
					else
					{
						printf("\nYOUR ANSWER IS WRONG !BETTER LUCK NEXT TIME...");
						printf("\nTRUE ANSWER IS A...INDUS");
						getch();
					}
				case 2:
					clrscr();
					printf("\n\t\t  ||||||||||KON HAI BADA AKALMAND||||||||||");
					printf("\n\n********************************************************************************");
					printf("\n\t\t\t\t    PRESENTED BY AKASH DABHI AND BURHAN MAKDA...");
					printf("\n\n\t\t\t\t\t\t%s YOUR TOTAL MARKS = %d",name,t);
					printf("\n\nQ2.WHICH STATE IS LARGEST PRODUCER OF APPLE IN INDIA\?");
					printf("\nA...UTTRAKHAND");
					printf("\nB...HIMACHAL PRADESH");
					printf("\nC...JAMMU AND KASHMIR");
					printf("\nD...NAGALAND");
					printf("\n...");
					fflush(stdin);
					scanf("%c",&ans);
					if(ans=='c' || ans=='C')
					{
						t++;
						t2=2;
						printf("\nCONGRATULATIONS YOUR ANSWER IS RIGHT...");
						getch();
					}
					else
					{
						printf("\nYOUR ANSWER IS WRONG !BETTER LUCK NEXT TIME...");
						printf("\nTRUE ANSWER IS C...JAMMU AND KASHMIR");
						getch();
					}
				case 3:
					clrscr();
					printf("\n\t\t  ||||||||||KON HAI BADA AKALMAND||||||||||");
					printf("\n\n********************************************************************************");
					printf("\n\t\t\t\t    PRESENTED BY AKASH DABHI AND BURHAN MAKDA...");
					printf("\n\n\t\t\t\t\t\t%s YOUR TOTAL MARKS = %d",name,t);
					printf("\n\nQ3.WHEN IS WORLD YOGA DAY");
					printf("\nA...14 APR");
					printf("\nB...21 JUN");
					printf("\nC...21 JUL");
					printf("\nD...24 JUN");
					printf("\n...");
					fflush(stdin);
					scanf("%c",&ans);
					if(ans=='b' || ans=='B')
					{
						t++;
						t3=3;
						printf("\nCONGRATULATIONS YOUR ANSWER IS RIGHT...");
						getch();
					}
					else
					{
						printf("\nYOUR ANSWER IS WRONG !BETTER LUCK NEXT TIME...");
						printf("\nTRUE ANSWER IS B...21 JUN");
						getch();
					}
				case 4:
					clrscr();
					printf("\n\t\t  ||||||||||KON HAI BADA AKALMAND||||||||||");
					printf("\n\n********************************************************************************");
					printf("\n\t\t\t\t    PRESENTED BY AKASH DABHI AND BURHAN MAKDA...");
					printf("\n\n\t\t\t\t\t\t%s YOUR TOTAL MARKS = %d",name,t);
					printf("\n\nWITH WHICH OF THE FOLLOWING RIVERS DOES CHAMBAL RIVER MARGE\?");
					printf("\nA... BANAS");
					printf("\nB... GANGA");
					printf("\nC... NARMADA");
					printf("\nD... YAMUNA");
					printf("\n...");
					fflush(stdin);
					scanf("%c",&ans);
					if(ans=='d' || ans=='D')
					{
						t++;
						t4=4;
						printf("\nCONGRATULATIONS YOUR ANSWER IS RIGHT...");
						getch();
					}
					else
					{
						printf("\nYOUR ANSWER IS WRONG !BETTER LUCK NEXT TIME...");
						printf("\nTRUE ANSWER IS D... YAMUNA");
						getch();
					}
				case 5:
					clrscr();
					printf("\n\t\t  ||||||||||KON HAI BADA AKALMAND||||||||||");
					printf("\n\n********************************************************************************");
					printf("\n\t\t\t\t    PRESENTED BY AKASH DABHI AND BURHAN MAKDA...");
					printf("\n\n\t\t\t\t\t\t%s YOUR TOTAL MARKS = %d",name,t);
					printf("\n\nWHERE WAS THE ELECTRICITY SUPPLY FIRST INTRODUCED INDIA");
					printf("\nA... MUMBAI");
					printf("\nB...DAHRADUN");
					printf("\nC...DARJEELING");
					printf("\nD... CHENNAI");
					printf("\n...");
					fflush(stdin);
					scanf("%c",&ans);
					if(ans=='c' || ans=='C')
					{
						t++;
						t5=5;
						printf("\nCONGRATULATIONS YOUR ANSWER IS RIGHT...");
						getch();
					}
					else
					{
						printf("\nYOUR ANSWER IS WRONG !BETTER LUCK NEXT TIME...");
						printf("\nTRUE ANSWER IS C...DARJEELING");
						getch();
					}
				case 6:
					clrscr();
					printf("\n\t\t  ||||||||||KON HAI BADA AKALMAND||||||||||");
					printf("\n\n********************************************************************************");
					printf("\n\t\t\t\t    PRESENTED BY AKASH DABHI AND BURHAN MAKDA...");
					printf("\n\n\t\t\t\t\t\t%s YOUR TOTAL MARKS = %d",name,t);
					printf("\n\nWHICH ONE IS THE LARGEST DISTRICT OF GUJARAT");
					printf("\nA... JUNAGADH");
					printf("\nB... JAMNAGAR");
					printf("\nC... KUTCH");
					printf("\nD... BHAVNAGAR");
					printf("\n...");
					fflush(stdin);
					scanf("%c",&ans);
					if(ans=='c' || ans=='C')
					{
						t++;
						t6=6;
						printf("\nCONGRATULATIONS YOUR ANSWER IS RIGHT...");
						getch();
					}
					else
					{
						printf("\nYOUR ANSWER IS WRONG !BETTER LUCK NEXT TIME...");
						printf("\nTRUE ANSWER IS C... KUTCH");
						getch();
					}
				case 7:
					clrscr();
					printf("\n\t\t  ||||||||||KON HAI BADA AKALMAND||||||||||");
					printf("\n\n********************************************************************************");
					printf("\n\t\t\t\t    PRESENTED BY AKASH DABHI AND BURHAN MAKDA...");
					printf("\n\n\t\t\t\t\t\t%s YOUR TOTAL MARKS = %d",name,t);
					printf("\n\nWHO WAS THE FIRST CHIEF MINISTER OF GUJARAT\?");
					printf("\nA... BABUBHAI J. PATEL");
					printf("\nB... CHIMANBHAI PATEL");
					printf("\nC... BALWANTRAI MEHTA");
					printf("\nD... JIVRAJ NARAYAN MEHTA");
					printf("\n...");
					fflush(stdin);
					scanf("%c",&ans);
					if(ans=='d' || ans=='D')
					{
						t++;
						t7=7;
						printf("\nCONGRATULATIONS YOUR ANSWER IS RIGHT...");
						getch();
					}
					else
					{
						printf("\nYOUR ANSWER IS WRONG !BETTER LUCK NEXT TIME...");
						printf("\nTRUE ANSWER IS D... JIVRAJ NARAYAN MEHTA");
						getch();
					}
				case 8:
					clrscr();
					printf("\n\t\t  ||||||||||KON HAI BADA AKALMAND||||||||||");
					printf("\n\n********************************************************************************");
					printf("\n\t\t\t\t    PRESENTED BY AKASH DABHI AND BURHAN MAKDA...");
					printf("\n\n\t\t\t\t\t\t%s YOUR TOTAL MARKS = %d",name,t);
					printf("\n\nWHICH ONE IS THE LONGEST RIVER IN GUJRAT?");
					printf("\nA... SABARMATI");
					printf("\nB... MAHI");
					printf("\nC...NARMADA");
					printf("\nD... TAPI");
					printf("\n...");
					fflush(stdin);
					scanf("%c",&ans);
					if(ans=='c' || ans=='C')
					{
						t++;
						t8=8;
						printf("\nCONGRATULATIONS YOUR ANSWER IS RIGHT...");
						getch();
					}
					else
					{
						printf("\nYOUR ANSWER IS WRONG !BETTER LUCK NEXT TIME...");
						printf("\nTRUE ANSWER IS C...NARMADA");
						getch();
					}
				case 9:
					clrscr();
					printf("\n\t\t  ||||||||||KON HAI BADA AKALMAND||||||||||");
					printf("\n\n********************************************************************************");
					printf("\n\t\t\t\t    PRESENTED BY AKASH DABHI AND BURHAN MAKDA...");
					printf("\n\n\t\t\t\t\t\t%s YOUR TOTAL MARKS = %d",name,t);
					printf("\n\nWHICH CITY IS ALSO KNOWN AS THE DIAMOND CITY OF INDIA");
					printf("\nA... RAJKOT");
					printf("\nB... SURAT");
					printf("\nC... GANDHINAGAR");
					printf("\nD... AHEMDABAD");
					printf("\n...");
					fflush(stdin);
					scanf("%c",&ans);
					if(ans=='b' || ans=='B')
					{
						t++;
						t9=9;
						printf("\nCONGRATULATIONS YOUR ANSWER IS RIGHT...");
						getch();
					}
					else
					{
						printf("\nYOUR ANSWER IS WRONG !BETTER LUCK NEXT TIME...");
						printf("\nTRUE ANSWER IS B... SURAT");
						getch();
					}
				case 10:
					clrscr();
					printf("\n\t\t  ||||||||||KON HAI BADA AKALMAND||||||||||");
					printf("\n\n********************************************************************************");
					printf("\n\t\t\t\t    PRESENTED BY AKASH DABHI AND BURHAN MAKDA...");
					printf("\n\n\t\t\t\t\t\t%s YOUR TOTAL MARKS = %d",name,t);
					printf("\n\nTOTAL NUMBER OF DISTRICTS IN GUJARAT");
					printf("\nA... 33");
					printf("\nB... 28");
					printf("\nC... 35");
					printf("\nD... 39");
					printf("\n...");
					fflush(stdin);
					scanf("%c",&ans);
					if(ans=='a' || ans=='A')
					{
						t++;
						t10=10;
						printf("\nCONGRATULATIONS YOUR ANSWER IS RIGHT...");
						getch();
					}
					else
					{
						printf("\nYOUR ANSWER IS WRONG !BETTER LUCK NEXT TIME...");
						printf("\nTRUE ANSWER IS A... 33");
						getch();
					}
				case 11:
					clrscr();
					printf("\n\t\t  ||||||||||KON HAI BADA AKALMAND||||||||||");
					printf("\n********************************************************************************");
					printf("\n\t\t\t\t    PRESENTED BY AKASH DABHI AND BURHAN MAKDA...");
					printf("\n\n%s YOUR TOTAL MARKS = %d",name,t);
					printf("\n\n\nYOUR TRUE ANSWER IS\n\n");
					if(t1==1)
					{
					printf(" Q1");
					}
					if(t2==2)
					{
						printf(" Q2");
					}
					if(t3==3)
					{
						printf(" Q3");
					}
					if(t4==4)
					{
						printf(" Q4");
					}
					if(t5==5)
					{
						printf(" Q5");
					}
					if(t6==6)
					{
						printf(" Q6");
					}
					if(t7==7)
					{
						printf(" Q7");
					}
					if(t8==8)
					{
						printf(" Q8");
					}
					if(t9==9)
					{
						printf(" Q9");
					}
					if(t10==10)
					{
						printf(" Q10");
					}
					printf("\n\nYOUR FALSE ANSWER IS\n\n");
					if(t1==0)
					{
						printf(" Q1");
					}
					if(t2==0)
					{
						printf(" Q2");
					}if(t3==0)
					{
						printf(" Q3");
					}
					if(t4==0)
					{
						printf(" Q4");
					}
					if(t5==0)
					{
						printf(" Q5");
					}
					if(t6==0)
					{
						printf(" Q6");
					}
					if(t7==0)
					{
						printf(" Q7");
					}
					if(t8==0)
					{
						printf(" Q8");
					}
					if(t9==0)
					{
						printf(" Q9");
					}
					if(t10==0)
					{
						printf(" Q10");
					}
					printf("\n\n...PRESS ANY KEY TO GOTO MENU");
			 }
			getch();
			goto op;
		default :
			goto op;
	}
}