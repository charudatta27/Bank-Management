//Bank management System
#include<stdio.h>
// #include<conio.h>

int acc_no;
float balance;
char name[20];
char address[20];

void Account_open();
void deposit_amt();
void withdraw_amt();
void display_account_info();

void main()
{
	int ch;
// 	clrscr();
	do
	{
// 		getch();
// 		clrscr();
		printf("\n*");
		printf("\n****** BANK OPERATION MENUS**");
		printf("\n*");
		printf("\n1. New Account Opening");
		printf("\n2. Deposit Amount");
		printf("\n3. Withdraw Amount");
		printf("\n4. Display Account details");
		printf("\n5. Exit");
		printf("\nEnter Your Choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: Account_open();
				printf("\nYour Account open Successfully!!!");
				break;
			case 2: deposit_amt();
				printf("\nYour Amount deposited Successfully!!!");
				break;
			case 3: withdraw_amt();
				break;
			case 4: display_account_info();
				break;
			case 5: printf("\nThanks for banking with us!!! Visit Again!!!");
				break;
			default: printf("\nPlease enter valid choice!!!");
		}
	}while(ch!=5);
// 	getch();
}
void Account_open()
{
	printf("\nEnter Account Number:");
	scanf("%d",&acc_no);
	printf("\nEnter Customer Name:");
	scanf("%s",&name);
	printf("\nEnter Customer Address:");
	scanf("%s",&address);
	printf("\nEnter deposit amount(Rs - 500/-) which required for open new account:");
	scanf("%f",&balance);
}
void deposit_amt()
{
	float deposit_amount;
	printf("\nEnter Amount which you wants to deposit:");
	scanf("%f",&deposit_amount);
	balance=balance+deposit_amount;
}
void withdraw_amt()
{
	float withdraw_amount;
	printf("\nEnter Amount which you wants to withdraw:");
	scanf("%f",&withdraw_amount);
	if(withdraw_amount<=balance)
	{
		balance=balance-withdraw_amount;
		printf("\nYour Amount withdraw Successfully!!!");
	}
	else
	{
		printf("\nYou don't have sufficient balance!!!");
	}
}
void display_account_info()
{
	printf("\n**");
	printf("\n****** YOUR ACCOUNT DETAILS **********");
	printf("\n**");
	printf("\nCustomer Account No: %d",acc_no);
	printf("\nCustomer Name      : %s",name);
	printf("\nCustomer Address   : %s",address);
	printf("\nAvailable Amount   : %f",balance);
}
