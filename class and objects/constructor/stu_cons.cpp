#include<iostream>
using namespace std;
class student
{ public:
    string name;
    int roll_no,mark;
 student()
 {
    cout<<"Enter the name:";
    cin>>name;
    cout<<"Enter the roll number:";
    cin>>roll_no;
    cout<<"Enter the mark:";
    cin>>mark;
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
    student s; 
    s.display();
    return 0;
}