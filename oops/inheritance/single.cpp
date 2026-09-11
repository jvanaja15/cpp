#include<iostream>
using namespace std;
class Person{
public:
void details()
{
    cout<<"Base class\n";
}
};
class Student:public Person{
public:
    void show()
    {
         cout<<"Derived class";

    } 
};
int main()
{
    Student s;
    s.details();
    s.show();

    return 0;
}