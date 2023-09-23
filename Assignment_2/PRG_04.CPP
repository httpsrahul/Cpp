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
		void display()
		{
			cout<<str<<endl;
		}
};
void main()
{
	clrscr();
	Demo d1,d2,d3;
	cout<<"Enter String-1: ";
	d1.input();
	cout<<"Enter String-2: ";
	d2.input();
	d3=d1+d2;
	cout<<"Concated String : ";
	d3.display();
	getch();
}