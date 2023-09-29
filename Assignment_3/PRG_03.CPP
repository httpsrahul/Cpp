
/*
Create a C++ program that contains a class SUPPLY.
It has city, total_sales and sales person as data members.
Now, create two classes Ahemdabad and Jamnagar which inherit class SUPPLY.
Now calculate and display sales person requirement in particular city according to the
following conditions
    (1) 2 sales person can only sale upto 20000.
    (2) More than 20000 sales, appoint new sale person.
    (3) If sales is less than 5000 no new appointment of sale person.
*/
#include<iostream.h>
#include<string.h>
#include<conio.h>
class Supply
{
	public:
		char* city;
		long total_sales;
		int sales_person;
		Supply(char* city)
		{
			strcpy(this->city,city);
		}
		void appointSalesPerson()
		{
			if(total_sales<5000)
				sales_person=0;
			else if(total_sales<=20000)
				sales_person=2;
			else
			{
				sales_person=total_sales/10000;
			}
		}
		void display()
		{
			appointSalesPerson();
			cout<<"CITY : "<<city<<endl;
			cout<<"SALES : "<<total_sales<<endl;
			cout<<"SALES PERSON : "<<sales_person<<endl;
		}
};
class Ahmedabad :public Supply
{
	public:
		Ahmedabad() : Supply("Ahmedabad")
		{
			cout<<"Supply Branch Ahemedabad"<<endl;
			cout<<"Enter Total Sales Of "<<city<<" City : ";
			cin>>this->total_sales;
		}
};
class Jamnagar :public Supply
{
	public:
		Jamnagar() : Supply("Jamnagar")
		{
			cout<<"Supply Branch Jamnagar"<<endl;
			cout<<"Enter Total Sales Of "<<city<<" City : ";
			cin>>this->total_sales;
		}
};
void main()
{
	clrscr();
	Ahmedabad a;
	a.display();
	Jamnagar j;
	j.display();
	getch();
}