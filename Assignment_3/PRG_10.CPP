
/*
write a c++ program to enter number of records of various cars and display it using multilevel inheritance
*/
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class First
{
	protected:
		char name[20];
		char model[20];
	public:
		void getFirst()
		{
			cout<<"Name : ";
			gets(name);
			cout<<"Model : ";
			gets(model);
		}
};
class Second:public First
{
	protected:
		int num;
		int year;
	public:
		void getSecond()
		{
			cout<<"Number : ";
			cin>>num;
			cout<<"Year : ";
			cin>>year;
		}
};
class Third:public Second
{
	public:
		void getData()
		{
			cout<<"Enter Data Of Car"<<endl;
			getFirst();
			getSecond();
		}
		void putData()
		{
			cout<<name<<"\t"<<model<<"\t"<<num<<"\t"<<year<<endl;
		}
};
void main()
{
	Third *t;
	int n;
	clrscr();
	cout<<"Enter Number Of Cars : ";
	cin>>n;
	t=new Third[n];
	for(int i=0;i<n;i++)
	{
		t[i].getData();
	}
	cout<<"Name \t Model \t Number \t Year"<<endl;
	for(i=0;i<n;i++)
	{
		t[i].putData();
	}
	getch();

}