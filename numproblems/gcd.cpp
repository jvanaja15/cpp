#include<iostream>
using namespace std;
int main()
{
    int num1,num2,limit;
    int gcd=1;
    cout<<"Enter number 1:";
    cin>>num1;
    cout<<"Enter number 2:";
    cin>>num2;
    if(num1>num2)
       limit=num1;
    else
       limit=num2;
    for(int i=1;i<=limit;i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            gcd=i;
        }
    }
    cout<<"GSD is "<<gcd;
return 0;

}