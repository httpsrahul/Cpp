/*
	create class account which contains data members such as acc_no,name,bal.
	to provide facilities such as deposite(), withdraw() display()
	perform above operation until user want to exit, if withdraw amount is larger
	than main balance then give appropriate message...

	CODER : RAHUL BARAIYA
	DATE : 26/07/2023
*/
#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<time.h>
class Account
{
	int no;
	char name[20];
	long bal;
	public:

		Account()
		{
			srand(time(NULL));
			no=rand();
			cout<<"------------------------"<<endl;
			cout<<"    CREATING ACCOUNT"<<endl;
			cout<<"------------------------"<<endl;
			cout<<"ENTER NAME : ";
			gets(name);
			cout<<"ENTER TOKEN AMOUNT : ";
			cin>>bal;
			cout<<"------------------------"<<endl;
			clrscr();
		}
		void deposite()
		{
			long dep;
			cout<<"Enter Deposite Amount : ";
			cin>>dep;
			if(dep<=0)
			{
				cout<<"Couldn't Deposite !"<<endl;
				return;
			}
			bal+=dep;
			cout<<"Deposited Successfully !"<<endl;
		}
		void withdraw()
		{
			if(bal<1000)
			{
				cout<<"1000Rs Must Required In Account"<<endl;
			}
			else
			{
				long with;
				cout<<"Enter Withdraw Amount : ";
				cin>>with;
				if(with>bal)
				{
					cout<<"Insufficient Balance!"<<endl;
					return;
				}
				if(with>(bal-1000))
				{
					cout<<"1000Rs Must Required In Account"<<endl;
					return;
				}
				bal-=with;
				cout<<"Withdraw Successfully !"<<endl;
			}
		}
		void display()
		{
			cout<<"ACCOUNT NO : "<<no<<endl;
			cout<<"ACCOUNT NAME : "<<name<<endl;
			cout<<"CURRENT BALANCE : "<<bal<<endl;
		}
};
/*void menu()
{
	cout<<"-----------------------"<<endl;
	cout<<" 0 : NEW USER ?"<<endl;
	cout<<" 1 : OLD USER ?"<<endl;
	cout<<"-----------------------"<<endl;
	cout<<" ENTER CHOICE : ";
	cin>>c;
} */
char getCommand()
{
	char c;
	cout<<"----------------"<<endl;
	cout<<"| COMMAND MENU |"<<endl;
	cout<<"----------------"<<endl;
	cout<<"| 0 : EXIT     |"<<endl;
	cout<<"| 1 : DEPOSITE |"<<endl;
	cout<<"| 2 : WITHDRAW |"<<endl;
	cout<<"| 3 : DISPLAY  |"<<endl;
	cout<<"----------------"<<endl;
	cout<<"Enter Command: ";
	c=getche();
	cout<<endl<<"----------------"<<endl;
	return c;
}
void main()
{
	char cmd;
	clrscr();
	Account a;
	do
	{
		cmd=getCommand();
		switch(cmd)
		{
			case '1' : a.deposite(); break;
			case '2' : a.withdraw(); break;
			case '3' : a.display(); break;
			default : break;
		}
		getch();
	}
	while(cmd!='0');
}
