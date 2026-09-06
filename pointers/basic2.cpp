#include<iostream>
using namespace std;
int change(int *p)
{
    *p=100;
    return *p;
}
int main()
{
    int a=10;
    cout<<change(&a);
    return 0;
}