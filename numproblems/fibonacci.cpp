#include<iostream>
using namespace std;
int main()
{int a,b,c,n;
    a=0;
    b=1;
    cout<<"Enter number of terms:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
cout<<a<<" ";
c=a+b;
a=b;
b=c;
    }
    return 0;
}