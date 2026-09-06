#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int b=20;
    int *p=&a;
    cout<<a<<" \n"<<&a<<" \n"<<p<<" \n"<<*p<<endl;
    *p=30;
    
    cout<<a<<endl;
    p=&b;
    cout<<*p;
    return 0;
}