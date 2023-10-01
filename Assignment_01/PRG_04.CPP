/*
Q-3 Write a C++ program for below inheritance. Here result class should display total of External and Internal performance points. [ Use Virtual Function]
			 EMPLOYEE

Internal                        External
Performance                     Performance

			 Result
*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class Employee
{
	protected:
		char *id,*name;
	public:
		Employee()
		{
			cout<<"Employee Id : ";
			gets(id);
			cout<<"Employee Name : ";
			gets(name);
		}
		virtual void display()
		{
			cout<<"Id :"<<id<<endl;
			cout<<"Name : "<<name<<endl;
		}
};
class Internal:public virtual Employee
{
	protected:
		int ipp;
	public:
		Internal()
		{
			cout<<"Enter Internal Performance : ";
			cin>>ipp;
		}
		void display()
		{
			cout<<"Internal Performance Point : "<<ipp<<endl;
		}
};
class External:public virtual Employee
{
	protected:
		int epp;
	public:
		External()
		{
			cout<<"Enter External Performance : ";
			cin>>epp;
		}
		void display()
		{
			cout<<"External Performance Point : "<<epp<<endl;
		}
};
class Result:public Internal,public External
{
	public:
		void	display()
		{
			cout<<"Total Performance : "<<ipp+epp<<endl;
		}
};
void main()
{
	clrscr();
	Result r;
	r.display();
	getch();
}