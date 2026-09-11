#include<iostream>
using namespace std;
class Animal{
public:
void eat()
{
    cout<<"Animal eats\n";
}
};
class Dog:public Animal{
public:
    void bark()
    {
         cout<<"Dog barks\n";

    } 
};
class Cat:public Animal{
public:
    void meow()
    {
         cout<<"Cat meows";

    } 
};
int main()
{
  Cat c;
  Dog d;
   d.eat();
   d.bark();
   c.eat();
   c.meow();
    return 0;
}