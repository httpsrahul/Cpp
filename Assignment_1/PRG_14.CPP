#include<iostream.h>
#include<conio.h>
class calC
{
	public:
		float division(float f1,float f2)
		{
			return (f1/f2);
		}
};
void main()
{
	clrscr();
	float x,y;
	cout<<"Enter Value Of X : ";
	cin>>x;
	cout<<"Enter Value Of Y :  ";
	cin>>y;
	calC c;
	float div=c.division(x,y);
	cout<<"Divison (x/y): "<<div<<endl;
	getch();
}