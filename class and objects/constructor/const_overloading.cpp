#include<iostream>
using namespace std;
class Area
{
    public:
    float length,breadth,radius;
    Area(float r)
    { 
        radius=r;
        cout<<"Area of circle:";
    } 
    Area(float l,float b)
{
    length=l;
    breadth=b;
    cout<<"\nArea of rectangle:";
}
void display1()
{
    cout<<3.14*radius*radius;
}
void display2()
{
    cout<<length*breadth;
}
};
int main()
{
 Area a1(3);
 a1.display1();
 Area a2(4,6);
 a2.display2();
    return 0;
}