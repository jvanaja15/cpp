#include<iostream>
using namespace std;
class Animal
{
    public:
    void forest()
    {
        cout<<"Animals lives in forest\n";
    }
};
class Dog:virtual public Animal
{
    public:
    void doginfo()
    {
        cout<<"Dog is a pet\n";
    }
};
class Cat:virtual public Animal
{
    public:
    void catinfo()
    {
        cout<<"Cat is a pet\n";
    }
};
class Pet: public Dog,public Cat
{
    public:
    void petinfo()
    {
        cout<<"Animals can be a pet ";
    }
};
int main()
{
 Pet p;
 p.forest();
 p.doginfo();
 p.catinfo();
 p.petinfo();
    return 0;
}