/*
3. Create class MEASURE which consist members as meter and
inch.
Create class INCH which contains members as inches.
Write a c++ program to convert inches into meter and inch.
*/
#include<iostream.h>
#include<conio.h>
using namespace std;
class MEASURE{
    public:
        int meter,inch;
        void display(){
            cout<<"METER : "<<meter<<endl;
            cout<<"INCH : "<<inch<<endl;
        }
};
class INCH{
    public:
        int inch;
        INCH(int inch){
            this->inch=inch;
        }
        operator MEASURE(){
            MEASURE m;
            m.meter=inch/39;
            m.inch=inch%=39;
            return m;
        }
};
int main()
{
    INCH i(100);
    MEASURE m;
    m=i;
    m.display();
    return 0;
}
