/*
    Make one class "MATCHES" with data members like Player Name No of Matches Played.
    Inherit that class into "TEST", "ONEDAY" and "120" Classes Use appropriate data
    members into these classes to calculate average run of the player.
*/
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;
void print(char c,int n)
{
	for(int i=0;i<n;i++)
		cout<<c;
	cout<<endl;
}
class Matches
{
	public:
		char p_name[20];
		int no_of_match;
		int notOut;
		float avg;
		Matches(char* p_name,int nom,int not)
		{
			this->no_of_match=nom;
			this->notOut=not;
			strcpy(this->p_name,p_name);
		}
		void displayPlayerData()
		{
			print('-',30);
			cout<<"Player Detailes "<<endl;
			print('-',30);
			cout<<"Player Name : "<<p_name<<endl;
		}
};
class Test:public Matches
{
	public:
		int run;
		Test(char *pname,int nom,int not,int runs):Matches(pname,nom,not)
		{
			this->run=runs;
			avg=(float)(run/(no_of_match-notOut));
		}
		void display()
		{
			cout<<"TEST PERFORMANCE"<<endl;
			print('-',30);
			cout<<"Total Runs : "<<run<<endl;
			cout<<"Total Matches : "<<no_of_match<<endl;
			cout<<"Total NotOuts : "<<notOut<<endl;
			cout<<"Average Runrate : "<<avg<<endl;
			print('-',30);
		}
};
class T20:public Matches
{
	public:
		int run;
		T20(char *pname,int nom,int not,int runs):Matches(pname,nom,not)
		{
			this->run=runs;
			avg=(float)(run/(no_of_match-notOut));
		}
		void display()
		{
			cout<<"T20 PERFORMANCE"<<endl;
			print('-',30);
			cout<<"Total Runs : "<<run<<endl;
			cout<<"Total Matches : "<<no_of_match<<endl;
			cout<<"Total NotOuts : "<<notOut<<endl;
			cout<<"Average Runrate : "<<avg<<endl;
			print('-',30);
		}
};
class Oneday:public Matches
{
	public:
		int run;
		Oneday(char *pname,int nom,int not,int runs):Matches(pname,nom,not)
		{
			this->run=runs;
			avg=(float)(run/(no_of_match-notOut));
		}
		void display()
		{
			cout<<"ONEDAY PERFORMANCE"<<endl;
			print('-',30);
			cout<<"Total Runs : "<<run<<endl;
			cout<<"Total Matches : "<<no_of_match<<endl;
			cout<<"Total NotOuts : "<<notOut<<endl;
			cout<<"Average Runrate : "<<avg<<endl;
			print('-',30);
		}
};
void getData(int &nom,int &not,int &runs)
{
	print('-',30);
	cout<<"No Of Matches : ";
	cin>>nom;
	cout<<"No Of Runs : ";
	cin>>runs;
	cout<<"No Of NotOuts : ";
	cin>>not;
	print('-',30);
}
void main()
{
	clrscr();
	char *name;
	int nom,not,runs;
	print('-',30);
	cout<<"Enter Player Name : ";
	gets(name);
	print('-',30);
	cout<<"Fill Up Test Match Data"<<endl;
	getData(nom,not,runs);
	Test t1(name,nom,not,runs);
	cout<<"Fill Up T20 Match Data"<<endl;
	getData(nom,not,runs);
	T20 t2(name,nom,not,runs);
	cout<<"Fill Up OneDay Match Data"<<endl;
	getData(nom,not,runs);
	Oneday o(name,nom,not,runs);
	t1.displayPlayerData();
	t1.display();
	t2.display();
	o.display();
	getch();
}

