#include<iostream>
using namespace std;
class Circle{
public:
int r;
float pi=3.14;
void get_data()
{
    cout<<"Enter the radius:";
    cin>>r;
    
}
void area()
{
    cout<<"Area of Circle:"<<pi*r*r;
}
void circumference()
{
    cout<<"\nCircumference of Circle:"<<2*pi*r;
}
};
int main()
{
    Circle c;
    c.get_data();
    c.area();
    c.circumference();
    return 0;
}