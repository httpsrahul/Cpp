#include<iostream.h>
#include<conio.h>
class numbers
{
	int num,rem,sum,multi;
	public:
		void get()
		{
			cout<<"Enter Number : ";
			cin>>num;
		}
		void process()
		{
			sum=0;
			multi=1;
			while(num>0){
				rem=num%10;
				(rem%2==0) ? (multi*=rem) : (sum+=rem) ;
				num=num/10;
			}
		}
		void put()
		{
			cout<<"SUM OF ODD DIGITS : "<<sum<<endl;
			cout<<"MULTIPLICATION OF EVEN DIGITS : "<<multi<<endl;
		}
};
void main()
{
	numbers n;
	clrscr();
	n.get();
	n.process();
	n.put();
	getch();
}