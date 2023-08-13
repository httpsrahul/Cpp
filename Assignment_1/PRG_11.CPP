//write a c++ program to perform multiplication of any two number, three number and four number using method overloading
// CODER: RAHUL BARAIYA
// DATE: 03/08/2023
#include<iostream.h>
#include<conio.h>
class Calc
{
	public:
		float multi(float p,float q)
		{
			return p*q;
		}
		float multi(float p,float q,float r)
		{
			return p*q*r;
		}
		float multi(float p,float q,float r,float s)
		{
			return p*q*r*s;
		}
};
void main()
{
	clrscr();
	Calc c;

	cout<<"Multiplication : "<<c.multi(12,4)<<endl;
	cout<<"Multiplication : "<<c.multi(12,3,4)<<endl;
	cout<<"MULTIPLICATION : "<<c.multi(12,3,4,6)<<endl;
	getch();

}

