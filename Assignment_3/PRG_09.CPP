#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<process.h>
void print(char c,int n)
{
	for(int i=0;i<n;i++)
		cout<<c;
	cout<<endl;
}
class Shape
{
	public:
		virtual void input()=0;
		virtual double getArea()=0;
};
class Circle:public Shape
{
	public:
		double radius;
		void input()
		{
			cout<<" Circle Data"<<endl;
			cout<<" Enter Radius : ";
			cin>>radius;
		}
		double getArea()
		{
			return 3.14*radius*radius;
		}
};
class Square:public Shape
{
	public:
		double side;
		void input()
		{
			cout<<" Square Data"<<endl;
			cout<<" Enter Side : ";
			cin>>side;
		}
		double getArea()
		{
			return side*side;
		}
};
class Rectangle:public Shape
{
	public:
		double length,width;
		void input()
		{
			cout<<" Rectangle Data"<<endl;
			cout<<" Enter Length : ";
			cin>>length;
			cout<<" Enter Width : ";
			cin>>width;
		}
		double getArea()
		{
			return length*width;
		}
};
void main()
{
	clrscr();
	while(1)
	{
		print('-',20);
		cout<<" Area Finder"<<endl;
		print('-',20);
		cout<<" 0 : Exit "<<endl;
		cout<<" 1 : Circle "<<endl;
		cout<<" 2 : Square "<<endl;
		cout<<" 3 : Rectangle "<<endl;
		print('-',20);
		cout<<" Enter Choice : ";
		char choice=getche();
		cout<<endl;
		clrscr();
		print('-',20);
		switch(choice)
		{
			case '0' : exit(0);
			case '2' :
				Square s;
				s.input();
				cout<<" Square Area : "<<s.getArea()<<endl;
				break;
			case '1' :
				Circle c;
				c.input();
				cout<<" Circle Area : "<<c.getArea()<<endl;
				break;
			case '3' :
				Rectangle r;
				r.input();
				cout<<" Rectangle Area : "<<r.getArea()<<endl;
				break;
			default:
				cout<<"Invalid Choice !"<<endl;
		}
		print('-',20);
		getch();
		clrscr();
	}
}