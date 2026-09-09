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
    student s("vanaja",4,96); 
    s.display();
    return 0;
}