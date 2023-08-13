/* 	
		TITLE : BOOK RECORDS PROGRAMME
		CODER : RAHUL BARAIYA
		DATE : 29/07/2023
 */
#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
class Book
{
	char	code[15],title[50],author[15],publisher[15],edition[10];
	public:
		void insert()
		{
			cout<<"\t\t\t------------------------"<<endl;
			cout<<"\t\t\t ENTER BOOK INFORMATION"<<endl;
			cout<<"\t\t\t------------------------"<<endl;
			cout<<"\t\t\t CODE : ";
			gets(code);
			cout<<"\t\t\t TITLE : ";
			gets(title);
			cout<<"\t\t\t AUTHOR : ";
			gets(author);
			cout<<"\t\t\t PUBLISHER : ";
			gets(publisher);
			cout<<"\t\t\t EDITION : ";
			gets(edition);
			clrscr();
		}
		void display()
		{
			clrscr();
			cout<<"\t\t\t-------------------------------"<<endl;
			cout<<"\t\t\t BOOK DETAIL"<<endl;
			cout<<"\t\t\t-------------------------------"<<endl;
			cout<<"\t\t\t CODE : "<<code<<endl;
			cout<<"\t\t\t TITLE : "<<title<<endl;
			cout<<"\t\t\t AUTHOR : "<<author<<endl;
			cout<<"\t\t\t PUBLISHER : "<<publisher<<endl;
			cout<<"\t\t\t EDITION  : "<<edition<<endl;
			cout<<"\t\t\t-------------------------------"<<endl;
			cout<<"\t\t\t PRESS ENTER FOR NEXT !"<<endl;
			getch();
		}
		void search(Book *b,int n);
		void sort(Book *b,int n);
};
void Book::search(Book *b,int n)
{
	char x[50];
	cout<<"\t\t\t Enter Book Title : ";
	gets(x);
	for(int i=0;i<n;i++)
	{
		if(strcmp(x,b[i].title)==0)
		{
			b[i].display();
			return;
		}
	}
	cout<<"\t\t\t Book Not Found !";
}
void Book::sort(Book *b,int n)
{
	Book temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(strcmp(b[i].title,b[j].title)>0)
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
}
void main()
{
	clrscr();
	Book b[10],temp;
	int n;
	char c;
	cout<<"\t\t\tEnter Number Of Book : ";
	cin>>n;
	for(int i=0;i<n;i++)
		b[i].insert();
	do
	{
		cout<<"\t\t\t 0 : Exit "<<endl;
		cout<<"\t\t\t 1 : Display "<<endl;
		cout<<"\t\t\t 2 : Search "<<endl;
		cout<<"\t\t\t 3 : SORT "<<endl;
		cout<<"\t\t\t Enter Choice : ";
		c=getche(); cout<<endl;
		switch(c)
		{
			case '1': for(i=0;i<n;i++)
						b[i].display();
					break;
			case '2': temp.search(b,n);
					break;
			case '3': temp.sort(b,n);
					break;
			default : break;
		}
	}
	while(c!='0');
	clrscr();
	getch();
}