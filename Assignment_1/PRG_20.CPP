/*
		TITLE : TO CHECK NUMBER IS ARMSTRONG OR NOT
		CODER : RAHUL BARAIYA
		DATE : 29/07/2023
*/
#include<iostream.h>
#include<conio.h>
#include "hyphen.cpp"
class Armstrong
{
	int num,rem,sum,temp;
	public:
		Armstrong()
		{
			sum=0;
		}
		void input()
		{
			cout<<"Enter An Integer : ";
			cin>>num;
			check();
		}

		void output()
		{
			if(sum==num)
			{
				cout<<"Number Is Armstrong !"<<endl;
			}
			else
			{
				cout<<"Number Is Not Armstrong !"<<endl;
			}
		}
		void check()
		{
			temp=num;
			while(temp!=0)
			{
				rem=temp%10;
				sum=sum+(rem*rem*rem);
				temp=temp/10;
			}
		}
};
void main()
{
	clrscr();
	Armstrong a;
	printHyphen(30);
	a.input();
	a.output();
	printHyphen(30);
	getch();
}