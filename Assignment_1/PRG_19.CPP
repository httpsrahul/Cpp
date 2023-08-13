/*
	TITLE : TO CHECK WHATHER NUMBER IS PALINDROM OR NOT
	CODER : RAHUL BARAIYA
*/
#include<iostream.h>
#include<conio.h>
#include "hyphen.cpp"
class Palindrom
{
	unsigned int num,rem,rev;
	public:
		Palindrom()
		{
			rev=0;
		}
		void inputNumber()
		{
			cout<<"Enter An Integer : ";
			cin>>num;
		}
		int isPalindrom()
		{
			int temp=num;
			while(temp>0)
			{
				rem=temp%10;
				rev=rev*10+rem;
				temp=temp/10;
			}
			if(num==rev)
			{
				return 1;
			}
			return 0;
		}
		void output()
		{
			if(isPalindrom()==1)
			{
				cout<<"Palindrom Number !"<<endl;
			}
			else
			{
				cout<<"Not A Palindrom !"<<endl;
			}
		}
};
void main()
{
	clrscr();
	Palindrom p;
	printHyphen(25);
	p.inputNumber();
	p.output();
	printHyphen(25);
	getch();
}


