// 22: write a c++ program for an educational institute to store information about their faculties, institute requires following information about their faculties
// faculty name,address,city.phone,gender,age
// use parameterised constructor to enter data dynamically
// also define default constructor to create empty object
// also display data using appropriate member function

/*
	CODER : RAHUL BARAIYA
	DATE : 10/08/2023
*/
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void print(char c,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<c;
	}
	cout<<endl;
}
class Faculty
{
	char *name,*address,*city,*phone,*gender,*age;
	public:

		Faculty(char *n,char *ad,char *c,char *ph,char *gen,char *ag)
		{
			name=new char[20];
			address=new char[100];
			city=new char[10];
			phone=new char[10];
			gender=new char[10];
			age=new char[3];

			strcpy(name,n);
			strcpy(address,ad);
			strcpy(city,c);
			strcpy(phone,ph);
			strcpy(gender,gen);
			strcpy(age,ag);
		}
		void display()
		{
			print('-',30);
			cout<<"Faculty Information";
			print('-',30);
			cout<<"Name  : "<<name<<endl;
			cout<<"Age : "<<age<<endl;
			cout<<"Gender : "<<gender<<endl;
			cout<<"Contact : "<<phone<<endl;
			cout<<"City : "<<city<<endl;
			cout<<"Address : "<<address<<endl;
			print('-',30);
		}
};
class College
{
};

Faculty create()
{
	name=new char[20];
	address=new char[100];
	city=new char[10];
	phone=new char[10];
	gender=new char[10];
	age=new char[3];
			
	char *name,*address,*city,*phone,*age,*gender;
	cout<<"Enter Faculty Data "<<endl;
	cout<<"Name : ";
	gets(name);
	cout<<"Age : ";
	gets(age);
	cout<<"Gender : ";
	gets(gender);
	cout<<"Contact : ";
	gets(phone);
	cout<<"City : ";
	gets(city);
	cout<<"Address : ";
	gets(address);
	Faculty f(name,address,city,phone,gender,age);
	return f;
}
void main()
{
	clrscr();
	Faculty f=create();
	f.display();
	getch();
}



