/*
	TITLE : WRITE A C++ PROGRAM THAT ACCEPT 3 VALUES FROM THE USER AND DISPLAY SMALLEST VALUE
		   AMONG THEM USING INLINE FUNCTION
	CODER : RAHUL BARAIYA
	DATE : 23/07/2023
*/
#include<iostream.h>
#include<conio.h>
class Smallest
{
	int n1,n2,n3;
	public:
		void input()
		{
			cout<<"Enter Number-1 : ";
			cin>>n1;
			cout<<"Enter Number-2 : ";
			cin>>n2;
			cout<<"Enter Number-3 : ";
			cin>>n3;
		}
		int getSmall();
		void output()
		{
			int min=getSmall();
			cout<<"Smallest Value : "<<min;
		}
};
inline int Smallest::getSmall()
{
	if(n1<n2 && n1<n3)
		return n1;
	else if(n2<n1 && n2<n3)
		return n2;
	else if(n3<n1 && n3<n2)
		return n3;
	else if(n1==n2)
		if(n1<n3)
		{
			return n1;
		}
		else
			return n3;
	else if(n1==n3)
		if(n1<n2)
			return n1;
		else
			return n2;
	else if(n2==n3)
		if(n1<n2)
			return n1;
		else
			return n2;
	else
		return n1;

}
void main()
{
	clrscr();
	Smallest s;
	s.input();
	s.output();
	getch();
}
