#include<iostream.h>
#include<conio.h>
class Interest
{
	float it;
	public:
		float calc(float p,float r,float n)
		{
			it=(p*r*n)/100;
			return it;
		}
};
void main()
{
	clrscr();
	Interest i1;
	cout<<"INTEREST(Default) : "<<i1.calc(10000,2.5,3);
	getch();
}