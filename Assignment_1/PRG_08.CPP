#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<string.h>
class Student
{
	int st_no;
	char *name,*address,*phone,*course;
	public:
		Student()
		{
			alloc();
			st_no=93;
			strcpy(name,"Rahul");
			strcpy(course,"BCA");
			strcpy(phone,"9714302979");
			strcpy(address,"Mahuva");
		}
		Student(int roll,char *name,char *address,char *phone,char *course)
		{
			alloc();
			st_no=roll;
			strcpy(this->name,name);
			strcpy(this->course,course);
			strcpy(this->phone,phone);
			strcpy(this->address,address);
		}
		Student(Student &s)
		{
			this->st_no=s.st_no;
			this->name=s.name;
			this->address=s.address;
			this->course=s.course;
			this->phone=s.phone;
		}
		void alloc()
		{
			name=new char[20];
			address=new char[100];
			phone=new char[10];
			course=new char[10];
		}
		void display()
		{
			cout<<"Student Information"<<endl;
			cout<<"Roll : "<<st_no<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Address : "<<address<<endl;
			cout<<"Course : "<<course<<endl;
			cout<<"Phone : "<<phone<<endl;
		}
};
void main()
{
	clrscr();
	Student s1;
	Student s2(111,"Oggy","Mahuva","9988334455","MSCIT");
	Student s3=Student(99,"jack","Mahuva","1133557799","MCA");
	Student s4=s2;
	s1.display();
	s2.display();
	s3.display();
	s4.display();
	getch();
}