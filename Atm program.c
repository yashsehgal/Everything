#https://m.facebook.com/story.php?story_fbid=2734956710125224&id=100008327644126
#Subsceibed by Bug Ninja
#include<stdio.h> 

#include<conio.h> 

float bal=10000;

int opt;

char pass[5]={1,2,3,4},ch;

char reset,ans;

void atm();

void Reset();

void with();

void Bal();

void dep();

void dep()

{int dep,depopt,note,deposit=0;

printf("\n Enter the Amount in multiples of 10\n");

scanf("%d",&dep);

if(dep>=50)

{printf("\n Enter the amount of notes:\n");

do

{printf("1.10\n");

printf("2.20\n");

printf("3.50\n");

printf("4.100\n");

printf("5.200\n");

printf("6.500\n");

printf("7.2000\n");

scanf("\n%d",&depopt);

switch(depopt)

{

case 1:printf("\n Enter the number of notes:\n");

scanf("%d",&note);

deposit+=note*10;

break;

case 2:printf("\n Enter the number of notes:\n");

scanf("%d",&note);

deposit+=note*20;

break;

case 3: printf("\n Enter the number of notes:\n");

scanf("%d",&note);

deposit+=note*50;

break;

case 4: printf("\n Enter the number of notes: \n");

scanf("%d",&note);

deposit+=note*100;

break;

case 5:printf("\n Enter the number of notes:\n");

scanf("%d",&note);

deposit+=note*200;

break;

case 6:printf("\n Enter the number of notes:\n");

scanf("%d",&note);

deposit+=note*500;

break;

case 7:printf("\n Enter the number of notes:\n");

scanf("%d",&note);

deposit+=note*2000;

break;

default:printf("\n WRONG CHOICE.\n");

}

}

while(dep>deposit);

if(deposit==dep)

{

printf("\n Your Cash has been successfully deposited in your account\n");

}

else

{printf("Error!\n");

}

}

else

{printf("\n Minimum Amount must be Rs 50/-\n\n");

}

bal+=dep;

}

void Bal()

{

	clrscr();

	printf("\n Your account balance is INR %f\n",bal);

	}

void with()

{

float amt;

clrscr();

printf("\n Enter the amount:\n");

scanf("%f",&amt);

if(amt>bal)

{printf("Insufficient balance in your account.\n");

}

else if(amt==0)

{printf("\n Amount must be greater than 0\n");

}

else

{printf("\n Kindly collect your cash\n");

printf("\n *********Thank you for using our Services*******\n");

bal-=amt;

}}

void atm()

{

clrscr();

printf("\n\n*********WELCOME TO BANK OF BUGS********\n\n");

printf("1.Cash Withdrawl\n");

printf("2.Balance Enquiry\n");

printf("3.Deposit Cash\n");

printf("4.Quit \n");

printf("\n **********WELCOME TO BANK OF BUGS******\n\n");

scanf("%d",&opt);

switch(opt)

{

case 1: with();

break;

case 2: Bal();

break;

case 3: dep();

break;

case 4: break;

default: printf(" \n WRONG CHOICE\n");

}}

void Reset()

{int mob,b;

char newpass[5],newpass1[5],ch2,ch1;

clrscr();

printf("\nEnter the last 4 digits of your Registered Mobile  number: \n");

scanf("%d",&mob);

if(mob==1000)

{printf("Enter your new password\n");

for(int i=1;i<=4;i++)

{

ch1=getch();

newpass[i]=ch1;

ch1='*';

printf("%c",ch1);

}}

else

{printf("\n Sorry,Bank seems an Unauthorised Access\n");

}

if(newpass[1]!='1' && newpass[2]!='2' && newpass[3]!='3' && newpass[4]!='4')

{printf("\n\n********Your Password is successfully changed********\n\n");

	printf("Press any key to continue\n");

		getch();

		clrscr();

		printf("\n Enter your New 4 digit PIN\n");

		for(int i=1;i<=4;i++)

		{ch2=getch();

		newpass1[i]=ch2;

		ch2='*';

		printf("%c",ch2);

		}

		if(newpass1[1]==newpass[1] && newpass1[2]==newpass[2] && newpass1[3]==newpass[3] && newpass1[4]==newpass[4])

		{atm();

		do

		{

		printf("\n Continue Transaction?(y/n)\n");

		scanf("\n Thank you for using our ATM Services\n");

		if(ans=='y'||ans=='Y')

			{atm();

					}

					else if(ans=='n'||ans=='N')

					{printf("\n Thank you for using our ATM Services\n");

						}

							else{

							printf("\n WRONG CHOICE\n");

							}

							}

							while(ans=='y'||ans=='Y');

							}

							else{

							printf("\n\n UNAUTHORISED ACCESS\n\n THANK YOU \n\n");

							}}

							else{

							printf("\n New Password must be different from previous one\n\n ******THANK YOU FOR USING OUR SERVICES******\n\n");

							}}

int main()

{clrscr();

printf("Enter your 4 digit PIN\n");

for(int i=1;i<=4;i++)

{

ch=getch();

pass[i]=ch;

ch='*';

printf("%c",ch);

}

getch();

if(pass[1]=='1'&&pass[2]=='2'&&pass[3]=='3'&&pass[4]=='4')

{atm();

if(opt!=4)

{

do

{

printf("\n Continue Transaction?(y/n)\n");

scanf("%c",&ans);

if(ans=='y'||ans=='Y')

{atm();

}

else if(ans=='n'||ans=='N')

{printf("\n Thank you for using our ATM services\n");

}

else

{printf("\n WRONG CHOICE\n");

}}

while(ans=='y'||ans=='Y');

}

else

{printf("\n\n********THANK YOU FOR USING OUR ATM SERVICES*********\n");

}

}

else

{printf("\n Sorry,Wrong Password");

printf("\n\n DO YOU WANT TO RESET PASSWORD?(y/n)\n");

scanf("%c",&reset);

if(reset=='y'||reset=='Y')

{Reset();

}

else

{

printf("\n\n**********THANK YOU FOR USING OUR ATM SERVICES***********\n");

}}}
