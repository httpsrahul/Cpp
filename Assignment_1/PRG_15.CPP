/*
	 TITLE : perform all arithmetic operation (+,-,*,/) using inline function in c++
	 CODER : Rahul Baraiya
	 Date : 24/07/2023
*/
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<process.h>
#include "hyphen.cpp"
class Arithmetic
{
	float n1,n2,ans;
	char op;
	public:
		void input()
		{
			cout<<" Enter Operand-1 : ";
			cin>>n1;
			cout<<" Enter Operand-2 : ";
			cin>>n2;
		}
		void sum()
		{
			cout<<" Addition : "<<n1+n2<<endl;
		}
		void sub()
		{
			cout<<" Subtraction : "<<n1-n2<<endl;
		}
		void multi()
		{
			cout<<" Multiplication : "<<n1*n2<<endl;
		}
		void div()
		{
			cout<<" Division : "<<n1/n2<<endl;
		}
};
void main()
{
	clrscr();
	Arithmetic a;
	char op;
	do
	{
		printHyphen(30);
		cout<<" + : Addition"<<endl;
		cout<<" - : Subtraction"<<endl;
		cout<<" * : Multiplication"<<endl;
		cout<<" / : Division"<<endl;
		cout<<" 0 : EXIT"<<endl;
		printHyphen(30);
		cout<<" Enter Your Choice : ";
		op=getche(); cout<<endl;
		printHyphen(30);
		if(op=='0')
			exit(0);
		a.input();
		switch(op)
		{
			case '+': a.sum(); break;
			case '-': a.sub(); break;
			case '*': a.multi(); break;
			case '/': a.div(); break;
			default : cout<<"Invalid Choice"<<endl; break;
		}
	}while(op!=0);
	getch();
}