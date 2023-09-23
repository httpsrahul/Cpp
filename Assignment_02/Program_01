/*
	TITLE : Write a c++ program that illustrate Unary operator overloading using Member function
	CODER : Rahul Baraiya
	 Date : 02/09/2023
*/
#include<iostream.h>
#include<conio.h>
class Demo
{
	int x,y,z;
	public:
		Demo(int x,int y,int z)
		{
			this->x=x;
			this->y=y;
			this->z=z;
		}
		void operator ++()
		{
			x++;
			y++;
			z++;
		}
		void display()
		{
			cout<<"Value Of X : "<<x<<endl;
			cout<<"Value Of Y : "<<y<<endl;
			cout<<"Value Of Z : "<<z<<endl;
		}
};
void main()
{
	clrscr();
	Demo d1(10,20,30);
	d1.display();
	d1++;
	d1.display();
	getch();
}
