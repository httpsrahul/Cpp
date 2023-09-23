#include<iostream.h>
#include<conio.h>
class Matrix
{
	int arr[3][3];
	public:
		friend void operator <<(ostream &o,Matrix &m)
		{
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					o<<m.arr[i][j]<<" ";
				}
				o<<endl;
			}
		}
		friend void operator >>(istream &I,Matrix &m)
		{
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					I>>m.arr[i][j];
				}
			}
		}
		friend Matrix operator +(Matrix &m1,Matrix &m2)
		{
			Matrix m3;
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					m3.arr[i][j]=m1.arr[i][j]+m2.arr[i][j];
				}
			}
			return m3;
		}
};
void main()
{
	clrscr();
	Matrix a,b,c;
	cout<<"Enter Matrix A : "<<endl;
	cin>>a;
	cout<<"Enter Matrix B : "<<endl;
	cin>>b;
	c=a+b;
	cout<<"MATRIX-C : "<<endl;
	cout<<c;
	getch();
}