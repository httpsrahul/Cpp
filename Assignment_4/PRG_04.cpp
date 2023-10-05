/*
4. Create class CURRENCY which consist notes of
note2000,note500,note200,note100,note50,note20,note10,no
te5,note2,note1.

Create class RUPEES which contains member as coins.

Write a c++ program to input different notes and convert into
number of coins.
*/
#include<iostream.h>
#include<conio.h>
using namespace std;
class RUPEES{
    public:
    long int coins;  
    void display(){
        cout<<"COINS : "<<coins<<endl;
    }
};
class CURRENCY{
    public:
        int n1,n2,n5,n10,n20,n50,n100,n200,n500,n2000;
        CURRENCY(){
            cout<<"ENTER NUMBER OF NOTES"<<endl;
            cout<<"2000 : ";
            cin>>n2000;
            cout<<"500 : ";
            cin>>n500;
            cout<<"200 : ";
            cin>>n200;
            cout<<"100 : ";
            cin>>n100;
            cout<<"50 : ";
            cin>>n50;
            cout<<"20 : ";
            cin>>n20;
            cout<<"10 : ";
            cin>>n10;
            cout<<"5 : ";
            cin>>n5;
            cout<<"2 : ";
            cin>>n2;
            cout<<"1 : ";
            cin>>n1;
        }
        operator RUPEES(){
            RUPEES r;
            r.coins=(n2000*2000)+(n500*500)+(n200*200)+(n100*100)+(n50*50)+(n20*20)+(n10*10)+(n5*5)+(n2*2)+(n1*1);
        }
};
int main(){
    CURRENCY c;
    RUPEES r;
    r=c;
    r.display();
    return 0;
}