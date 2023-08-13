/*
	TITLE : PROGRAMME TO CHECK PALINDROM NUMBER
	CODER : RAHUL BARAIYA
	DATE : 07/07/2023
*/
#include<iostream.h>
#include<conio.h>
class Palindrom
{
	int num,rem,rev;
	public:
		Palindrom()
		{
			cout<<"Enter Number : ";
			cin>>num;
			if(checkNumber()==1)
				cout<<"Number Is Palindrom ! ";
			else
				cout<<"Number Is Not Palindrom !";
		}
		int checkNumber()
		{
			for(int temp=num,rev=0;temp>0;temp=temp/10)
			{
				rem=temp%10;
				rev=(rev*10)+rem;
			}
			return (num==rev) ? 1 : 0;
		}
};
void main()
{
	clrscr();
	Palindrom p;
	getch();
}