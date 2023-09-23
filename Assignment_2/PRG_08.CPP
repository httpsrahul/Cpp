#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
class Demo
{
	char str[20];
	public:
		void input()
		{
			gets(str);
		}
		int operator ==(Demo d2)
		{
			return (strcmp(this->str,d2.str)==0) ? 1 : 0;
		}
};
void main()
{
	clrscr();
	Demo d1,d2;
	cout<<"Enter String-1: ";
	d1.input();
	cout<<"Enter String-2: ";
	d2.input();
	if(d1==d2)
	{
		cout<<"Both Objects String Are Equal !"<<endl;
	}
	else
	{
		cout<<"Both Objects String Are Different !"<<endl;
	}
	getch();
}