#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
void print(char c,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<c;
	}
	cout<<endl;
}
class Student
{
	int roll_no,java,oracle,networking,total;
	char name[20],grade[5];
	float per;
	public:

		void input()
		{
			print('-',30);
			cout<<"Enter Student Detail"<<endl;
			print('-',30);
			cout<<"Roll : ";
			cin>>roll_no;
			cout<<"Name : ";
			gets(name);
			cout<<"Java : ";
			java=getValidMarks();
			cout<<"Oracle : ";
			oracle=getValidMarks();
			cout<<"Networking : ";
			networking=getValidMarks();
			print('-',30);
		}
		void process()
		{
			if(isPass())
			{
				total=getTotal();
				per=getPer();
				strcpy(grade,getGrade());
			}
			else
			{
				total=0;
				per=0;
				strcpy(grade,"F");
			}
		}
		void output()
		{
			print('-',30);
			cout<<"Student Information"<<endl;
			print('-',30);
			cout<<"Roll : "<<roll_no<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Java : "<<java<<endl;
			cout<<"Oracle : "<<oracle<<endl;
			cout<<"Networking : "<<networking<<endl;
			cout<<"Total : "<<total<<endl;
			cout<<"Percentage : "<<per<<endl;
			cout<<"Grade : "<<grade<<endl
			;
			print('-',30);
		}
		int isPass()
		{
			return (oracle>40 && java>40 && networking>40) ? 1 : 0;
		}
		int getValidMarks()
		{
			int marks;
			do
			{
				cin>>marks;
			}
			while(marks>100 || marks<0);
			return marks;
		}
		int getTotal()
		{
			return java+oracle+networking;
		}
		float getPer()
		{
			return total/3.0;
		}
		char* getGrade()
		{
			if(per>=90)
				return "O";
			if(per>=80 && per<90)
				return "A+";
			if(per>=70 && per<80)
				return "A";
			if(per>=60 && per<70)
				return "B";
			if(per>=50 && per<60)
				return "C";
			return "D";
		}
};
void main()
{
	clrscr();
	Student s;
	s.input();
	s.process();
	s.output();
	getch();
}