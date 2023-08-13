/*
  * write a c++ program as per following information
  * create a class student which contain data member such as name,is,per and college_name
  * insert any 10 records using member function get_data()
  * sort the records as per college_name() using member function sort()
  * display records in appropriate format
  CODER : RAHUL BARAIYA
  DATE : 19/07/2023
*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
int i,j;
class Student
{
	int id;
	char name[20],college[20];
	float per;
	public:
		void get_data()
		{
			cout<<"------------------------"<<endl;
			cout<<"  ENTER STUDENT DETAIL  "<<endl;
			cout<<"------------------------"<<endl;
			cout<<"ID: ";
			cin>>id;
			cout<<"NAME : ";
			gets(name);
			cout<<"COLLEGE : ";
			gets(college);
			cout<<"PERCENTAGE : ";
			cin>>per;
		}
		void display()
		{
			cout<<id<<"\t"<<name<<"\t"<<per<<"\t"<<college<<endl;
		}
		void sortByCollege(Student *s,int n);
		void sortByPercent(Student *s,int n);
};
void Student::sortByPercent(Student *s,int n)
{
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i].per<s[j].per)
			{
			   Student temp=s[i];
			   s[i]=s[j];
			 s[j]=temp;
			}
		}
	}
}
void Student::sortByCollege(Student *s,int n)
{
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(s[i].college,s[j].college)>0)
			{
				  Student temp=s[i];
				 s[i]=s[j];
				s[j]=temp;
			}
		}
	}
}
void main()
{
	Student s[10];
	int n;
	clrscr();
	cout<<"Enter Number Of Student : ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		s[i].get_data();
	}
	s[0].sortByPercent(s,n);
	cout<<"----------------------------------"<<endl;
	cout<<"ID\tNAME\tPERCENT\tCOLLEGE"<<endl;
	cout<<"----------------------------------"<<endl;
	for(i=0;i<n;i++)
	{
		s[i].display();
	}
	getch();
}