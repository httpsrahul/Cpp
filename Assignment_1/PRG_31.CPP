/*
	06/07/2023 :: ASS_1.31 :: REVERSE THE NUMBER USING CONSTRUCTOR 
*/
#include<iostream.h>
#include<conio.h>
class ReverseNumber
{
	int rev,rem;
	public:
		ReverseNumber(int no)
		{
			rev=0;
			while(no!=0)
			{
				rem=no%10;
				rev=(rev*10)+rem;
				no=no/10;
			}
			cout<<"REVERSE : "<<rev;
		}
};
void main()
{
	clrscr();
	int no;
	cout<<"ENTER NUMBER : ";
	cin>>no;
	ReverseNumber r(no);
	getch();
}
