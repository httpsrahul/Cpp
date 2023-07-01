/*
TITLE : SINGE STUDENT RECORD
CODER : RAHUL BARAIYA
 DATE : 30 JUNE 2023
*/
#include<iostream.h>
#include<conio.h>
class Student
{
	int roll,cpp,dfs,os,sad,total;
	char name[20],city[20];
	float per;
	public:
		void getData()
		{
			cout<<"\n------------------------\n";
			cout<<"ENTER BASIC INFORMATION ";
			cout<<"\n------------------------\n";
			cout<<"ROLL : ";
			cin>>roll;
			cout<<"NAME : ";
			cin>>name;
			cout<<"CITY : ";
			cin>>city;
			cout<<"------------------------\n";
			cout<<"ENTER MARKS INFORMATION ";
			cout<<"\n------------------------\n";
			cout<<"CPP : ";
			cin>>cpp;
			cout<<"DFS : ";
			cin>>dfs;
			cout<<"SAD : ";
			cin>>sad;
			cout<<" OS : ";
			cin>>os;
			clrscr();
		}
		void findResult()
		{
			if(cpp>40 && dfs>40 && sad>40 && os>40)
			{
				total=cpp+dfs+sad+os;
				per=total/4.0;
			}
			else
			{
				total=0;
				per=0;
			}
		}
		void putData()
		{
			cout<<"\n------------------------\n";
			cout<<"  PERSONAL INFORMATION";
			cout<<"\n------------------------";
			cout<<"\nROLL : "<<roll;
			cout<<"\nNAME : "<<name;
			cout<<"\nCITY : "<<city;
			cout<<"\n------------------------";
			cout<<"\n  ACADEMIC INFORMATION";
			cout<<"\n------------------------";
			cout<<"\nCPP : "<<cpp;
			cout<<"\nDFS : "<<dfs;
			cout<<"\nSAD : "<<sad;
			cout<<"\n OS : "<<os;
			cout<<"\nTOTAL : "<<total;
			cout<<"\nPERCENTAGE : "<<per<<"%";
		}
};
void main()
{
	Student s1;
	clrscr();
	s1.getData();
	s1.findResult();
	s1.putData();
	cout<<"\n------------------------";
	cout<<"\n    Ig. @geeksrahul     ";
	getch();
}