/*
	TITLE : Write a c++ program that illustrate Binary operator overloading using Friend function
	CODER : Rahul Baraiya
	Date : 02/09/2023
*/
#include<iostream.h>
#include<conio.h>
class Demo
{
	int x,y,z;
	public:
		void input()
		{
			cout<<"X : ";
			cin>>x;
			cout<<"Y : ";
			cin>>y;
			cout<<"Z : ";
			cin>>z;
		}
		void display()
		{
			cout<<"Value Of X : "<<x<<endl;
			cout<<"Value Of Y : "<<y<<endl;
			cout<<"Value Of Z : "<<z<<endl;
		}
		friend Demo operator +(Demo f1,Demo f2)
		{
			f1.x+=f2.x;
			f1.y+=f2.y;
			f1.z+=f2.z;
			return f1;
		}
};
void main()
{
	clrscr();
	Demo d1,d2,d3;
	cout<<"d1 Input"<<endl;
	d1.input();
	cout<<"d2 Input"<<endl;
	d2.input();
	d3=d1+d2;
	cout<<"d1 Display"<<endl;
	d1.display();
	cout<<"d2 Display"<<endl;
	d2.display();
	cout<<"d3 Display"<<endl;
	d3.display();
	getch();
}