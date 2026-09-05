#include<iostream>
using namespace std;
void fibonacci(int n)
{
    int a=0,b=1,c;
    for(int i=1;i<=n;i++)
    {
        cout<<a<<" "; //print 
        c=a+b;//add
        a=b;//updation
        b=c;
    }
}
int main()
{
    fibonacci(5);
    return 0;
}