#include<iostream>
using namespace std;
int main()
{
    int n=1234,rev=0;
    int digit;
    while(n>0)
    {
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
cout<<"reversed num:"<<rev;
}