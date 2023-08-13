/*
		TITLE : EMPLOYEE SALARY PROGRAM
		CODER : RAHUL BARAIYA
		DATE : 24/07/2023
*/

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class Employee
{
	int emp_no;
	char emp_name[20],dept_name[20];
	float salary,ta,da,pf,net_salary;
	public:
		Employee()
		{
			cout<<"-------------------------------------"<<endl;
			cout<<"\tEnter Employee Details"<<endl;
			cout<<"-------------------------------------"<<endl;
			cout<<"\tNUMBER : ";
			cin>>emp_no;
			cout<<"\tNAME : ";
			gets(emp_name);
			cout<<"\tDEPARTMENT : ";
			gets(dept_name);
			cout<<"\tSALARY : ";
			cin>>salary;
			cout<<"-------------------------------------"<<endl;
			clrscr();
			calculate();
		}
		void calculate()
		{
			ta=(salary*10)/100;
			da=(salary*8)/100;
			pf=(salary*5)/100;
			net_salary=salary+ta+da-pf;
		}
		void display()
		{
			cout<<"-------------------------------------"<<endl;
			cout<<"\tEMPLOYEE INFORMATIOM"<<endl;
			cout<<"-------------------------------------"<<endl;
			cout<<"\tNUMBER : "<<emp_no<<endl;
			cout<<"\tNAME : "<<emp_name<<endl;
			cout<<"\tDEPARTMENT : "<<dept_name<<endl;
			cout<<"\tSALARY : "<<salary<<endl;
			cout<<"\tTA AMOUNT : "<<ta<<endl;
			cout<<"\tDA AMOUNT : "<<da<<endl;
			cout<<"\tPF AMOUNT : "<<pf<<endl;
			cout<<"\tNET SALARY : "<<net_salary<<endl;
			cout<<"-------------------------------------"<<endl;
		}
};
void main()
{
	clrscr();
	Employee e;
	e.display();
	getch();
}


