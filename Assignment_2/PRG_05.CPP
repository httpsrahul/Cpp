#include<iostream.h>
#include<conio.h>
class Time
{
	int h,m,s;
	public:
		void input()
		{
			cout<<"Hours : ";
			cin>>h;
			cout<<"Minute : ";
			cin>>m;
			cout<<"Second : ";
			cin>>s;
			if(s>=60)
			{
				m+=s/60;	
			}
		}
		friend Time operator +(Time t1,Time t2)
		{
			Time t3;
			t3.s=t1.s+t2.s;
			if(t3.s>=60)
			{
				t3.m=t3.s/60;
				t3.s=t3.s%60;
				t3.m+=(t1.m+t2.m);
			}
			else
			{
				t3.m=t1.m+t2.m;
			}

			if(t3.m>=60)
			{
				t3.h=(t3.m/60);
				t3.m=(t3.m%60);
				t3.h+=(t1.h+t2.h);
			}
			else
			{
				t3.h=t1.h+t2.h;
			}
			return t3;
		}
		void display()
		{
			cout<<"HOURS: "<<h<<endl;
			cout<<"MINUTES : "<<m<<endl;
			cout<<"SECONDS : "<<s<<endl;
		}
};
void main()
{
	clrscr();
	Time t1,t2,t3;
	cout<<"INPUT TIME-1 OBJECT"<<endl;
	t1.input();
	cout<<"INPUT TIME-2 OBJECT"<<endl;
	t2.input();
	t3=t1+t2;
	cout<<"TIME-3 OBJECT !";
	t3.display();
	getch();
}