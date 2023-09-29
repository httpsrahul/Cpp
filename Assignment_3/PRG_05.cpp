// Write A Program That Create A Base Class Game.Class Game Has3 Sub Classes Called Badminton,Volleyball And Cricket.
// All The Subclasses Has Same Methods getPoint() and displayPoint(). Display Data Using Polymorphism Concept In C++
#include<iostream.h>
#include<conio.h>
class Game
{
	protected:
		int point;
	public:
		virtual void getPoint()=0;
		virtual void displayPoint()=0;
};
class Badminton:public Game
{
	public:
		void getPoint()
		{
			cout<<"Enter Point Of Badminoton : ";
			cin>>point;
		}
		void displayPoint()
		{
			cout<<"Badminton : "<<point<<endl;
		}
};
class Volleyball:public Game
{
	public:
		void getPoint()
		{
			cout<<"Enter Point Of Volleyball : ";
			cin>>point;
		}
		void displayPoint()
		{
			cout<<"Volleyball : "<<point<<endl;
		}
};
class Cricket:public Game
{
	public:
		void getPoint()
		{
			cout<<"Enter Point Of Cricket : ";
			cin>>point;
		}
		void displayPoint()
		{
			cout<<"Cricket : "<<point<<endl;
		}
};
void main()
{
	clrscr();
	Game *g;
	Volleyball b;
	g=&b;
	g->getPoint();
	g->displayPoint();
	getch();
}