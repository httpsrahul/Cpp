/*
2. Create class CALENDER which contains members as year,
month and days.
Create another class DAY which contains days.
Write a c++ program to input year, month and days and convert
it into days.
*/
#include<iostream.h>
#include<conio.h>
using namespace std;
class Day{
    public:
        int days;
};
class Calender{
    int year,month,days;
    public:
        Calender(){
            cout<<"Years : ";
            cin>>year;
            cout<<"Month  : ";
            cin>>month;
            cout<<"Days : ";
            cin>>days;
        }
        // 365 
        operator Day(){
            Day d;
            d.days=(year*365)+(month*30)+days;
            return d;
        }
};
int main(){
    Calender c;
    Day d=c;
    cout<<"Total Number Of Days : "<<d.days;
    return 0;
}