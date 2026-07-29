#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int digit,n;
    cout<<"Enter the number:";
    cin>>n;
    while(n>0)
    {
        digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
cout<<"sum of digits:"<<sum;
return 0;
}