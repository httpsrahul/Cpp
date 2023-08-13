/*
		TITLE : ASSIGNEMENT-1 : PROGRAM-12
		CODER : RAHUL BARAIYA
		DATE : 13-08-2023
*/
#include<iostream.h>
#include<conio.h>
class Two; // declaration of class
class One
{
	int n;
	public :
		One()
		{
			cout<<"Enter First Number : ";
			cin>>n;
		}
		friend void maximum(One,Two);
};
class Two
{
	int n;
	public:
		Two()
		{
			cout<<"Enter Second Number : ";
			cin>>n;
		}
		friend void maximum(One,Two);
};
void maximum(One o,Two t)
{
	if(o.n==t.n)
		cout<<"Both Number Are Same !";
	else if(o.n>t.n)
		cout<<"First Number Is Maximum !";
	else
		cout<<"Second Number Is Maximum !";
}
void main()
{
	clrscr();
	One a;
	Two b;
	maximum(a,b);
	getch();
}