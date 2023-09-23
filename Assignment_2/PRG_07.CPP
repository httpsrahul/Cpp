#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
class String
{
	char str[20];
	public:
		void input()
		{
			gets(str);
		}
		friend int operator ==(String s1,String s2)
		{
			return (strcmp(s1.str,s2.str)==0) ? 1 : 0;
		}
};
void main()
{
	clrscr();
	String s1,s2;
	cout<<"Enter String-1: ";
	s1.input();
	cout<<"Enter String-2: ";
	s2.input();
	if(s1==s2)
	{
		cout<<"Both Objects String Are Equal !"<<endl;
	}
	else
	{
		cout<<"Both Objects String Are Different !"<<endl;
	}
	getch();
}