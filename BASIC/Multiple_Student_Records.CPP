#include<iostream.h>
#include<conio.h>
#include<string.h>
class Student
{
	int roll,cpp,sad,os,dfs,total;
	char name[20],city[20],result[5];
	float per;
	public:
		void getData()
		{
			cout<<"-------------------------"<<endl;
			cout<<" ENTER BASIC INFORMATION "<<endl;
			cout<<"-------------------------"<<endl;
			cout<<"ROLL : ";
			cin>>roll;
			cout<<"NAME : ";
			cin>>name;
			cout<<"CITY : ";
			cin>>city;
			cout<<"-------------------------"<<endl;
			cout<<" ENTER MARKS INFORMATION "<<endl;
			cout<<"-------------------------"<<endl;
			cout<<"CPP : ";
			cin>>cpp;
			cout<<"DFS : ";
			cin>>dfs;
			cout<<"SAD : ";
			cin>>sad;
			cout<<" OS : ";
			cin>>os;
		}
		void findResult()
		{
			if(cpp>40 && dfs>40 && sad>40 && os>40)
			{
				total=cpp+sad+dfs+os;
				per=total/4.0;
				strcpy(result,"PASS");

			}
			else
			{
				total=0;
				per=0;
				strcpy(result,"FAIL");
			}
		}
		void putData()
		{
			cout<<roll<<"\t"<<name<<"\t"<<city<<"\t"<<cpp<<"\t"<<dfs<<"\t"<<sad<<"\t"<<os<<"\t"<<total<<"\t"<<per<<"%\t"<<result<<endl;
		}
};
void main()
{
	int const n=3;
	Student s[n];
	clrscr();
	for(int i=0;i<n;i++)
	{
		s[i].getData();
		s[i].findResult();
	}
	clrscr();
	cout<<"--------------------------------------------------------------------------------";
	cout<<"\t\t\t\tSTUDENT RECORDS"<<endl;
	cout<<"--------------------------------------------------------------------------------";
	cout<<"ROLL\tNAME\tCITY\tCPP\tDFS\tSAD\tOS\tTOTAL\tPER\tRESULT"<<endl;
	cout<<"--------------------------------------------------------------------------------";
	for(i=0;i<n;i++)
	{
		s[i].putData();
	}
	cout<<"--------------------------------------------------------------------------------";
	getch();
}