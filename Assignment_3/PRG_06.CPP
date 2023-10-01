#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
class Product
{
	protected:
		int p_code;
		char* p_name;
		int p_stock;
};
class Stock:protected Product
{
	public:
		void update(int p)
		{
			p_stock=p;
		}
};
class Sales:private Stock
{
	public:
		Sales()
		{
			cout<<"Enter Product Detail"<<endl;
			cout<<"Product Code : ";
			cin>>p_code;
			cout<<"Product Name : ";
			fflush(stdin);
			gets(p_name);
			cout<<"Product Stock : ";
			cin>>p_stock;
		}
		void sell_pro()
		{
			if(p_stock==0)
				cout<<"No Product Available"<<endl;
			else
			{
				int n;
				cout<<"Enter Quantity Of Product Do You Want To Sell : ";
				cin>>n;
					if(p_stock<n)
					cout<<"Insufficient Products"<<endl;
				else
					update(p_stock-n);
			}
		}
		void display()
		{
			cout<<p_name<<"'s Current Stock : "<<p_stock<<endl;
		}
};
class Purchase:private Stock
{
	public:
		Purchase()
		{
			cout<<"Enter Product Detail"<<endl;
			cout<<"Product Code : ";
			cin>>p_code;
			cout<<"Product Name : ";
			gets(p_name);
			cout<<"Product Stock : ";
			cin>>p_stock;
		}
		void purchase_pro()
		{
			int n;
			cout<<"Enter Quantity Of Product Do You Want To Purchase : ";
			cin>>n;
			update(p_stock+n);
		}
		void display()
		{
			cout<<p_name<<"'s Current Stock : "<<p_stock<<endl;
		}
};
void main()
{
	clrscr();

	Sales s;
	s.sell_pro();
	s.display();

	Purchase p;
	p.purchase_pro();
	p.display();

	getch();
}
