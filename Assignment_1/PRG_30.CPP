/*
	30 . Write A Menu Driven Program As Per Following Information
		Create Class Item Which Stores The Value Of i_id,i_name,i_stock
		To Provide Facility Such As Purchase() , Sales(), Stock()...
		Store Initial Data Using Constructor, If User Purchase Item,
		Then Increase The Stock, If Sales Then Decrese The Stock

		CODER: RAHUL BARAIYA
		DATE : 23/07/2023
*/
#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<process.h>
#include "hyphen.cpp"
class Item
{
	int i_id,i_stock;
	char i_name[20];
	public:
		Item()
		{
			i_id=128;
			strcpy(i_name,"Laptop");
			i_stock=1000;
		}
		void purchase();
		void sales();
		void stock();
};
void Item::purchase()
{
	int qty;
	cout<<"How many Units You Want To Purchase : ";
	cin>>qty;
	i_stock+=qty;
}
void Item::sales()
{
	int qty;
	cout<<"How many Units You Want To Sales : ";
	cin>>qty;
	if(qty>i_stock)
		cout<<"Insufficient Units"<<endl;
	else
		i_stock-=qty;
}
void Item::stock()
{
	cout<<" ID : "<<i_id<<endl;
	cout<<" NAME : "<<i_name<<endl;
	cout<<" STOCK "<<i_stock<<endl;
}
void main()
{
	Item i;
	clrscr();
	char choice;
	do
	{
		print('-',30);
		cout<<" 0 : Exit"<<endl;
		cout<<" 1 : To Sell Units"<<endl;
		cout<<" 2 : To Purchase Units "<<endl;
		cout<<" 3 : To Check Stock "<<endl;
		print('-',30);
		cout<<" Enter Choice ";
		choice=getche(); cout<<endl;
		print('-',30);
		switch(choice)
		{
			case '0' : exit(0);
			case '1' : i.sales(); break;
			case '2' : i.purchase(); break;
			case '3' : i.stock(); break;
			default : cout<<"Invalid Choice !"<<endl; break;
		}
		getch();
	}
	while(1);
}