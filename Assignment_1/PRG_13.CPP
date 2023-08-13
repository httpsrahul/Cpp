/*
	TITLE : Write A C++ Program To Perform Swap Two Number Using Call By Value
	CODER : RAHUL BARAIYA
	DATE : 03/08/2023

*/
#include<iostream.h>
#include<conio.h>
class Swap
{
	public:
	void swapping(int x,int y)
	{
		y=x+y;
		x=y-x;
		y=y-x;
		cout<<"In Swapping Function"<<endl;
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

	cout<<"After Swapping"<<endl;
	cout<<"X : "<<x<<endl;
	cout<<"Y : "<<y<<endl;

	Swap s;
	s.swapping(x,y);

	cout<<"After Swapping"<<endl;
	cout<<"X : "<<x<<endl;
	cout<<"Y : "<<y<<endl;

	getch();
}