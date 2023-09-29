/*
#Write a c++ program to create class STUDENT which contains data members such as 
    s_name
    s_roll.
    And appropriate method getting data.
#Create class TEST which derived from STUDENT, it contains members such as 
    marks of sub1 and sub2. 
    To define appropriate method for getting data.
#Create another class called RESULT which derived from class TEST which contains member such as 
    total_marks. 
    It also contains an appropriate method for calculating total_marks and display all the information of the student.
*/
#include<iostream>
using namespace std;
class Student {
    public:
        int s_roll;
        char s_name[20];
        void setPersonalData() {
            cout<<"Enter Student Roll : ";
            cin>>s_roll;
            cout<<"Enter Student Name : ";
            cin>>s_name;
        }
        void getPersonalData() {
            cout<<"Roll : "<<s_roll<<endl;
            cout<<"Name : "<<s_name<<endl;
        }
};
class Test : public Student {
    public: 
        int sub1,sub2,max;
        void setMarksData() {
            cout<<"Enter OOP Marks : ";
            sub1=getValidMarks(max);
            cout<<"Enter DFS Marks : ";
            sub2=getValidMarks(max);
        }
        int getValidMarks(int n) {
            while(true){
                int x;
                cin>>x;
                if(x>=0 && x<=50){
                    return x;
                } else {
                    cout<<"Marks Must Lies Between 0 to "<<n<<endl;
                }
                
            }
        }
        void getMarksData(){
            cout<<"OOP : "<<sub1<<endl;
            cout<<"DFS : "<<sub2<<endl;
        }
};
class Result : public Test{
    int total;
    float per;
    public:
        Result() {
            cout<<"Maximum Marks : ";
            cin>>max;
        }
        void setData(){
            setPersonalData();
            setMarksData();
            process();
        void process(){
            total=sub1+sub2;
            per=((float)total/(max*2))*100.0;
        }
        void getData(){
            getPersonalData();
            getMarksData();
            cout<<"Total : "<<total<<endl;
            cout<<"Per : "<<per<<"%"endl;
        }
};
int main() {
    Result r;
    r.setData();
    r.getData();
    return 0;
}