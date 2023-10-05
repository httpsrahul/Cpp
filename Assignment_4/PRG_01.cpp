// 1. Create class CALENDER which contains members as year,
// month and days.
// Create another class DAY which contains days.
// Write a c++ program to convert days into number of years,
// month and days.

#include<iostream.h>
#include<conio.h>
using namespace std;

class Day
{
    public:
       int days;
       Day(int d){
            this->days=d;
       }
};
class Calender
{
    int year,month,days;
    public:
        Calender(Day d){
            this->year=d.days/365;
            this->month=(d.days%=365)/30;
            this->days=d.days%=30;
        }
        void display(){
            cout<<"YEAR : "<<year<<endl;
            cout<<"MONTH : "<<month<<endl;
            cout<<"DAY : "<<days<<endl;

        }   
};

int main(){
    Day d(396);
    Calender c=d;
    c.display();
    return 0;
}