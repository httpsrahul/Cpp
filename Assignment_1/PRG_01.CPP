/*
	Write A C++ Program To Perform Addition Of 3 Numbers Using Default Argument.
	(Take Second And Third Number As Default Argument)
*/
#include<iostream.h>
#include<conio.h>
class Addition
{
	public:
		int sum(int,int,int);
};
int Addition::sum(int p,int q=0,int r=0)
{
	return p+q+r;
}
void main()
{
	clrscr();
	Addition a;
	int sum=a.sum(10,40,30);
	cout<<"Sum : "<<sum;
	getch();
}