#include<iostream>
using namespace std;
class student
{ public:
    string name;
    int roll_no,mark;
 void get_details()
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
    student s1;
    student s2;
    s1.get_details();
    s1.display();
    s2.get_details();
    s2.display();
    
    return 0;
}