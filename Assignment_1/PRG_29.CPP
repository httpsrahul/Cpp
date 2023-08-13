/*
	Assignment-1 :: Program-29 :: 07/08/2023

	write a c++ program to use overloaded constructor of following type
	do nothing constructor
	constructor using one int type arguments
	copy constructor

	create objects of the class in such a way in main(), that is generate following output

	value of alpha = 23
	value of bita = 23
	value of gama = 23
	value of theta = 23

	CODER: RAHUL BARAIYA
	DATE : 07/08/2023
*/
#include<iostream.h>
#include<conio.h>
class Const
{
	int x;
	public:
		Const()
		{
			x=23;
			cout<<"Do Nothing Constructor"<<endl;
		}
		Const(int p)
		{
			x=p;
			cout<<"Parameterised Constructor"<<endl;
		}
		Const(Const &a,int p)
		{
			x=a.x;
			a.x=p;
			cout<<"Copy Constructor"<<endl;
		}
		int getValue()
		{
			return x;
		}
};
void main()
{
	clrscr();

	Const alpha;
	cout<<"Value Of Alpha : "<<alpha.getValue()<<endl;

	Const beta(23);
	cout<<"Value Of Beta : "<<beta.getValue()<<endl;

	Const theta=Const(beta,111);
	cout<<"Value Of Theta : "<<theta.getValue()<<endl;


	cout<<"Value Of Beta : "<<beta.getValue()<<endl;

	Const gama;
	gama=alpha;
	cout<<"Value Of Gama : "<<gama.getValue()<<endl;

	getch();
}
