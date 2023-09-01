#include<iostream.h>
#include<conio.h>
class Matrix
{
	int m[3][3];
	int rTotal[3];
	int cTotal[3];
	public:
		Matrix()
		{
			for(int i=0;i<3;i++)
			{
				rTotal[i]=0;
				cTotal[i]=0;
			}
		}
		void input()
		{
			cout<<"Enter 3X3 MARIX"<<endl;
			for (int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					cin>>m[i][j];
				}
			}
		}
		void process()
		{
			int x=0,y=0;
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					rTotal[x]+=m[i][j];
					cTotal[x]+=m[j][i];
				}
				x++;
			}
		}
		void output()
		{
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					cout<<m[i][j]<<" ";
				}
				cout<<endl;
			}
			for(i=0;i<3;i++)
			{
				cout<<"ROW-"<<i+1<<" TOTAL : "<<rTotal[i]<<endl;
				cout<<"COL-"<<i+1<<" TOTAL : "<<cTotal[i]<<endl;
			}
		}
};
void main()
{
	clrscr();
	Matrix m;
	m.input();
	m.process();
	clrscr();
	m.output();
	getch();
}