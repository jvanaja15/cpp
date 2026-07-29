#include<iostream>
using namespace std;
int main()
{
    int n,count;
    cout<<"enter a number:";
    cin>>n;
    count=0;
    while(n>0)
    {
        count++;
        n=n/10;
    }
    cout<<"count of digits in this number is:"<<count;
    return 0;
}