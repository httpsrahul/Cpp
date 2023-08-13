/*
	PROGRAM_23 : WRITE A C++ PROGRAM TO CREATE CLASS EMPLOYEE WHICH CONTAIN
	DATA MEMEBERS SUCH AS emp_id,emp_name,emp_basic_salary,HRA(12%),DA(10%),net_salary.
	It Also Contain Member Function such as get_data() for getting data, calculate() for calculating net_salary, display() for display all records.
	Insert Any 10 Records And Display It In Proper Manner.

	CODER : RAHUL BARAIYA
	DATE : 24/07/2023
*/
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<math.h>
class EMPLOYEE
{
	int emp_id;
	char emp_name[20];
	float da,hra,emp_basic_salary,net_salary;
	void calculate();
	public:
		void get_data();
		void display();
};
void EMPLOYEE::get_data()
{
	cout<<"Employee Id : ";
	cin>>emp_id;
	cout<<"Employee Name : ";
	cin>>emp_name;
	cout<<"Basic Salary : ";
	cin>>emp_basic_salary;
	calculate();
}
void EMPLOYEE::calculate()
{
	da=(emp_basic_salary*10)/100;
	hra=(emp_basic_salary*12)/100;
	net_salary=emp_basic_salary+da+hra;
}
void EMPLOYEE::display()
{
 //  cout.precision();
	cout<<emp_id<<"\t"<<emp_name<<"\t"<<emp_basic_salary<<"\t"<<floor(da)<<"\t"<<floor(hra)<<"\t"<<floor(net_salary)<<endl;
}
void printHyphen(int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"-";
	}
	cout<<endl;
}
void main()
{
	int n;
	clrscr();
	cout<<"How Many Record You Want To Insert : ";
	cin>>n;
	EMPLOYEE *e;
	printHyphen(50);
	for(int i=0;i<n;i++)
	{
		e[i].get_data();
	}
	cout<<"\t\t EMPLOYEE RECORDS DATABASE";
	printHyphen(20);
	cout<<"ID\tNAME\tBASIC SALARY\tDA\tHRA\tNET SALARY"<<endl;
	printHyphen(20);
	for(i=0;i<n;i++)
	{
		e[i].display();
	}
	getch();
}