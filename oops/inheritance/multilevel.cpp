#include<iostream>
using namespace std;
class Animal{
public:
void show()
{
    cout<<"Animal \n";
}
};
class Dog:public Animal{
public:
    void display()
    {
         cout<<"Dog\n";

    } 
};
class Puppy:public Dog{
public:
    void print()
    {
         cout<<"Puppy";

    } 
};
int main()
{
   Puppy p;
   p.show();
   p.display();
   p.print();
    return 0;
}