#include<iostream.h>
#include<conio.h>
class Addition
{
	int a,b;
	public:
		void input()
		{
			cout<<"ENTER VALUE OF A : ";
			cin>>a;
			cout<<"ENTER VALUE OF B : ";
			cin>>b;
		}
		void output()
		{
			int c=a+b;
			cout<<"THE VALUE OF SUM : "<<c;
		}
};
void main()
{
	clrscr();
	Addition obj;
	cout<<"------------------------\n";
	cout<<"  PROGRAM FOR ADDITION  \n";
	cout<<"------------------------\n";
	obj.input();
	obj.output();
	cout<<"\n------------------------";
	cout<<"\n    Ig. @geeksrahul     ";
	getch();
}
