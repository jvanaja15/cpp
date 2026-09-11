#include<iostream>
using namespace std;
class Father{
public:
void show()
{
    cout<<"Father \n";
}
};
class Mother{
public:
    void display()
    {
         cout<<"Mother\n";

    } 
};
class Child:public Father ,public Mother{
public:
    void print()
    {
         cout<<"Child";

    } 
};
int main()
{
  Child c;
   c.show();
   c.display();
   c.print();
    return 0;
}