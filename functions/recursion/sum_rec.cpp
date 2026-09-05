#include<iostream>
using namespace std;
int add(int n)
{
    if(n<=1)
    {
        return n;
    }
    return n+add(n-1);
}
int main()
{ 
     int sum=add(10);
     cout<<sum;
    return 0;
}