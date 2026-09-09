#include<iostream>
using namespace std;
class student
{ public:
    string name;
    int roll_no,mark;
 student(string n,int r,int m)
 {
    name=n;
    roll_no=r;
    mark=m;
 }
 student(const student &s)
 {
    name=s.name;
    roll_no=s.roll_no;
    mark=s.mark;

 }
 void display()
 {
    cout<<"\nSTUDENT DETAILS";
    cout<<"\nName:"<<name;
    cout<<"\nRoll no:"<<roll_no;
    cout<<"\nMark:"<<mark;
 }

};

int main()
{
    student s1("vanaja",4,96); 
    s1.display();
    cout<<endl;
    student s2(s1);
    s2.display();
    return 0;
}