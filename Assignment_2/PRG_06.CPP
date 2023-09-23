#include<iostream.h>
#include<conio.h>
class Array
{
	int* arr;
	int size;
	public:
		Array(int size)
		{
			this->size=size;
			arr=new int[size];
		}
		friend void operator >>(istream &I,Array &a)
		{
			for(int i=0;i<a.size;i++)
			{
				cout<<"Array-"<<i<<" : ";
				I>>a.arr[i];
			}
		}
		friend void operator <<(ostream &o,Array &a)
		{
			for(int i=0;i<a.size;i++)
			{
				o<<"Array-"<<i<<" : "<<a.arr[i]<<endl;
			}
		}
};
void main()
{
	clrscr();
	int size;
	cout<<"Enter Size For Array : ";
	cin>>size;
	Array a(size);
	cout<<"Input "<<size<<" Element In Array"<<endl;
	cin>>a;
	cout<<"Inputed Array"<<endl<<a;
	getch();
}