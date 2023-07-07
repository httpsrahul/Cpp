#include<iostream.h>
#include<conio.h>
class MultiDigit
{
	int num,rem,multi;
	public:
		void get()
		{
			cout<<"Enter Number : ";
			cin>>num;
		}
		void process()
		{
			multi=1;
			while(num>0)
			{
				rem=num%10;
				multi*=rem;
				num=num/10;
			}
		}
		void put()
		{
			cout<<"Multiplication Of All The Digits : "<<multi<<endl;
		}
};
void main()
{
	clrscr();
	MultiDigit m;
	m.get();
	m.process();
	m.put();
	getch();
}
