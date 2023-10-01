#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
class Media
{
	protected:
		float price;
		char title[50];
	public:
		Media(float price,char* title)
		{
			this->price=price;
			strcpy(this->title,title);
		}
};
class Book:private Media
{
	int pages;
	public:
		Book(int pages,float price,char *title):Media(price,title)
		{
			this->pages=pages;
		}
		void display()
		{
			cout<<"Book Information"<<endl;
			cout<<"Title : "<<title<<endl;
			cout<<"Price : "<<price<<endl;
			cout<<"Pages : "<<pages<<endl;

		}
};
class Tape:private Media
{
	int time;
	public:
		Tape(float time,float price,char *title):Media(price,title)
		{
			this->time=time;
		}
		void display()
		{
			cout<<"Tape Information"<<endl;
			cout<<"Title : "<<title<<endl;
			cout<<"Price : "<<price<<endl;
			cout<<"Times : "<<time<<endl;

		}
};
void main()
{
	clrscr();
	Book b(99,342,"Sayein Mein Dhup");
	b.display();
	getch();
}