/*
	18 :write a c++ program using class and member function which is used to perform using call by reference
	CODER : RAHUL BARAIYA
	DATE : 03/08/2023
*/
#include<iostream.h>
#include<conio.h>
class Swap
{
	public:
	void swapping(int &x,int &y)
	{
		int temp=x;
		x=y;
		y=temp;
		cout<<"Inside Swapping Function"<<endl;
		cout<<"X : "<<x<<endl;
		cout<<"Y : "<<y<<endl;
	}
} ;
void main()
{
	clrscr();
	int x,y;

	cout<<"Enter Value Of X : ";
	cin>>x;
	cout<<"Enter Value Of Y : ";
	cin>>y;

	cout<<"Before Swapping Function"<<endl;
	cout<<"X : "<<x<<endl;
	cout<<"Y : "<<y<<endl;

	Swap s;
	s.swapping(x,y);

	cout<<"After Swapping Function"<<endl;
	cout<<"X : "<<x<<endl;
	cout<<"Y : "<<y<<endl;

	getch();
}