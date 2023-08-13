/*
 	TITLE : Write A C++ Program For Store Keeper Who Wants To Store And See The Detail About Product That He Sold.
		 It Must Include Pro_code,Pro_name,Pro_Price,Sold_date. Write Inline Function That Accept Above Detail 
		 From Shop Keeper And Display Them On Screen With Formatted Manner
	CODER : Rahul Baraiya

*/
#include<iostream.h>
#include<conio.h>
void printDashed(int n)
{
	for(int i=0;i<n;i++)
		cout<<"-";
	cout<<endl;
}
class Product
{
	int pro_code;
	char pro_name[20];
	float pro_price;
	char sold_date[15];
	public:
		void insert()
		{
			clrscr();
			printDashed(30);
			cout<<"Product Code : ";
			cin>>pro_code;
			cout<<"Product Name : ";
			cin>>pro_name;
			cout<<"Product Price : ";
			cin>>pro_price;
			cout<<"Sold Date(dd/mm/yyyy) : ";
			cin>>sold_date;
		}
		void display()
		{
			cout<<pro_code<<"\t"<<pro_name<<"\t"<<pro_price<<"\t"<<sold_date<<endl;
		}
};
void main()
{
	clrscr();
	Product p[10];
	int n;
	cout<<"Enter Number Of Product : ";
	cin>>n;
	for(int i=0;i<n;i++)
		p[i].insert();
	printDashed(40);
	cout<<"\tPRODUCTS SALES RECORDS"<<endl;
	printDashed(40);
	cout<<"CODE\tNAME\tPRICE\tDATE"<<endl;
	printDashed(40);
	for(i=0;i<n;i++)
		p[i].display();
	printDashed(40);
	getch();
}