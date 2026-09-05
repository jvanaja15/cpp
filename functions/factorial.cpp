#include<iostream>
using namespace std;
int factorial(int n)
{
    int fact=1;
    while(n>0)
    {
        fact=fact*n;
        n--;
    }
    return fact;
}
int main()
{    int fact=factorial(5);
    cout<<fact;

    return 0;
}