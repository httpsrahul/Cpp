/*
	TITLE :	EMPLOYEE SALARY PROGRAM
	CODER : RAHUL BARAIYA
	DATE : 29/07/2023 
*/

#include<iostream.h>
#include<conio.h>
#include "hyphen.cpp"
#include<math.h>
class Employee
{
	unsigned int emp_no;
	char emp_name[20];
	float bsalary,ta,da,hra,pf,net_salary;
	public:
		void getData();
		void calculate();
		void display();
};
void Employee::getData()
{
	printHyphen(40);
	cout<<"Enter Employee Data"<<endl;
	printHyphen(40);
	cout<<"Employee Number : ";
	cin>>emp_no;
	cout<<"Employee Name : ";
	cin>>emp_name;
	cout<<"Basic Salary : ";
	cin>>bsalary;
	printHyphen(40);
}
void Employee::calculate()
{
	ta=(bsalary*10)/100;
	da=(bsalary*40)/100;
	hra=(bsalary*25)/100;
	pf=(bsalary*15)/100;
	net_salary=bsalary+ta+da+hra-pf;
}
void Employee::display()
{
	printHyphen(40);
	cout<<"EMPLOYEE INFORMATIONS"<<endl;
	printHyphen(40);
	cout<<"Employee Number: "<<emp_no<<endl;
	cout<<"Employee Name : "<<emp_name<<endl;
	cout<<"Basic Salary : "<<bsalary<<endl;
	cout<<"Ta Amount : "<<floor(ta)<<endl;
	cout<<"Da Amount : "<<floor(da)<<endl;
	cout<<"Hra Amount : "<<floor(hra)<<endl;
	cout<<"Pf Amount : "<<floor(pf)<<endl;
	cout<<"Net Salary : "<<floor(net_salary)<<endl;
	printHyphen(40);
}
void main()
{
	clrscr();
	Employee e;
	e.getData();
	e.calculate();
	e.display();
	getch();
}
