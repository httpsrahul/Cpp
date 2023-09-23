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
		friend Demo operator +(Demo d1,Demo d2)
		{
			strcat(d1.str," ");
			strcat(d1.str,d2.str);
			return d1;
		}
		friend int operator >=(Demo d1,Demo d2)
		{
			int res=strcmp(d1.str,d2.str);
			return (res>0 || res==0) ? 1 : 0;
		}
		void display()
		{
			cout<<str<<endl;
		}
};
void main()
{
	clrscr();
	Demo d1,d2,d3;
	cout<<"Enter String Of d1 object: ";
	d1.input();
	cout<<"Enter String Of d2 object: ";
	d2.input();
	d3=d1+d2;
	cout<<"Concated String Of d3 object: ";
	d3.display();
	if(d1>=d2)
		cout<<"Both Are Equal Or d1 is greater"<<endl;
	else
		cout<<"d2 is greater"<<endl;
	getch();
}