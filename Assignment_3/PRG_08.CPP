#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void print(char c,int n)
{
	for(int i=0;i<n;i++)
		cout<<c;
	cout<<endl;
}
class Vehicle
{
	protected:
		char color[15];
		char number[15];
};
class Scooter:virtual protected Vehicle
{
	protected:
		int bike;
		double price;
};
class Bill:virtual protected Vehicle
{
	protected:
		double discount;
		double tax;
};
class Payment:protected Scooter,protected Bill
{
	public:
		double total;
		void calculateDiscount(double drate=7)
		{
			discount=price*drate/100.0;
		}
		void calculateTax(double trate=3)
		{
			tax=price*trate/100.0;
		}
		void inputData()
		{
			print('-',40);
			cout<<"Enter Vehicle Information"<<endl;
			print('-',40);
			cout<<"Number : ";
			gets(number);
			fflush(stdin);
			cout<<"Color : ";
			gets(color);
			do
			{
				cout<<" 0 : Moped"<<endl;
				cout<<" 1 : Bike"<<endl;
				cout<<" Select Type: ";
				cin>>bike;

			}
			while(bike!=1 && bike!=0);
			cout<<"Price : ";
			cin>>price;
			print('-',40);
			getch();
			clrscr();
		}
		void process()
		{
			calculateDiscount();
			calculateTax();
			if(bike)
			{
				discount+= (price*3)/100.0;
			}
			else
			{
				discount+= (price*2)/100.0;
			}
			total=price+discount-tax;
		}
		void display()
		{
			print('-',40);
			cout<<"Vehicle Payment Information"<<endl;
			print('-',40);
			bike ? cout<<"Type : Bike" : cout<<"Type : Moped";
			cout<<endl<<"Color : "<<color<<endl;
			cout<<"Number : "<<number<<endl;
			cout<<"Price : "<<price<<endl;
			cout<<"Discount : "<<discount<<endl;
			cout<<"Tax : "<<tax<<endl;
			cout<<"Total : "<<total<<endl;
			print('-',40);
			getch();
		}
};
void main()
{
	clrscr();
	Payment p;
	p.inputData();
	p.process();
	p.display();
}