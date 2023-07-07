#include<iostream.h>
#include<conio.h>
class SumDigits
{
	int num,rem,sum;
	public:
		void get()
		{
			cout<<"Enter Number : ";
			cin>>num;
		}
		void process()
		{
			sum=0;
			while(num>0)
			{
				rem=num%10;
				sum+=rem;
				num=num/10;
			}
		}
		void put()
		{
			cout<<"Sum Of All The Digits : "<<sum<<endl;
		}
};
void main()
{
	SumDigits s;
	clrscr();
	s.get();
	s.process();
	s.put();
	getch();
}