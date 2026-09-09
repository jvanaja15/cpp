#include<iostream>
using namespace std;
class Rectangle{
public:
int length,breadth;
void get_data()
{
    cout<<"Enter the length:";
    cin>>length;
    cout<<"Enter the breadth:";
    cin>>breadth;
}
void area()
{
    cout<<"Area of rectangle:"<<length*breadth;
}
void perimeter()
{
    cout<<"\nPerimeter of rectangle:"<<2*(length+breadth);
}
};
int main()
{
    Rectangle r;
    r.get_data();
    r.area();
    r.perimeter();
    return 0;
}