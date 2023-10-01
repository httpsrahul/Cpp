#include<iostream.h>
#include<conio.h>
#include<string.h>
void print(char c,int n)
{
	for(int i=0;i<n;i++)
		cout<<c;
	cout<<endl;
}
class Media
{
	protected:
		char title[15];
		double price;
	public:
		Media(char *title,double price)
		{
			strcpy(this->title,title);
			this->price=price;
		}
};
class Harddisk:private Media
{
	char h_type[15];
	int qty;
	public:
		Harddisk(char *htype,int qty,char *type,double price):Media(type,price)
		{
			strcpy(this->h_type,htype);
			this->qty=qty;
		}
		void display()
		{
			print('-',25);
			cout<<" Media Title : "<<title<<endl;
			cout<<" Type : "<<h_type<<endl;
			cout<<" Price : "<<price<<endl;
			cout<<" Quantity : "<<qty<<endl;
			cout<<" Total : "<<price*qty<<endl;
			print('-',25);
		}
};
class Pendrive:private Media
{
	char p_type[15];
	int qty;
	public:
		Pendrive(char *ptype,int qty,char *type,double price):Media(type,price)
		{
			strcpy(this->p_type,ptype);
			this->qty=qty;
		}
		void display()
		{
			print('-',25);
			cout<<" Media Title : "<<title<<endl;
			cout<<" Type : "<<p_type<<endl;
			cout<<" Price : "<<price<<endl;
			cout<<" Quantity : "<<qty<<endl;
			cout<<" Total : "<<price*qty<<endl;
			print('-',25);
		}
};
void main()
{
	clrscr();
	Harddisk h("Internal",100,"Harddisk",2300);
	h.display();
	Pendrive p("Peripheral",200,"Pendrive",230);
	p.display();
	getch();
}