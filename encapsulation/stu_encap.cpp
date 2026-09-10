#include<iostream>
using namespace std;
class Student
{
private:
int mark;
public:
void setMark(int m)
{
    mark=m;
}
int getMark()
{
    return mark;
}
};
int main()
{
    Student s;
    s.setMark(95);
    cout<<"Marks:"<<s.getMark();
    return 0;
}