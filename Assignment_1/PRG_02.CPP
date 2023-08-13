/*
	Title : Write c++ program to calculate area of square,circle and triangle using function overloading
	Coder : Rahul Baraiya
*/
#include<conio.h>
#include<iostream.h>

class Area
{
	public:
		float area(float l,int x=0)
		{
			return l*l;
		}
		float area(float r)
		{
			return 3.14*r*r;
		}
		float area(float l,float b,int x=0)
		{
			return (0.5)*(l*b);
		}
};
void main()
{
	clrscr();

	float s,c,t;
	Area a;

	s=a.area(12,0);
	c=a.area(42.2);
	t=a.area(34.4,32.4,0);

	cout<<"SQAURE : "<<s<<endl;
	cout<<"CIRCLE : "<<c<<endl;
	cout<<"TRIANGEL : "<<t<<endl;

	getch();
}