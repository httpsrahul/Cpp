#include<iostream.h>
#include<conio.h>
class Distance
{
	int km,m;
	public:
		Distance()
		{
			cout<<"Input Distance"<<endl;
			cout<<"Kilometer : ";
			cin>>km;
			cout<<"Meters : ";
			cin>>m;
			if(m>=1000)
			{
				km+=m/1000;
				m%=1000;
			}
		}
		friend Distance operator -(Distance d1,Distance d2)
		{

			d1.km-=d2.km;
			d1.m-=d2.m;
			if(d1.m<0)
			{
				d1.m+=1000;
				d1.km--;
			}
			return d1;
		}
		void output()
		{
			cout<<"Distance : "<<endl;
			cout<<"Kilometer : "<<km<<endl;
			cout<<"Meter : "<<m<<endl;
		}
};
void main()
{
	clrscr();
	Distance d1,d2;
	d1.output();
	d2.output();
	Distance d3=d1-d2;
	d3.output();
	getch();
}