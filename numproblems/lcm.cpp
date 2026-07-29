#include<iostream>
using namespace std;
int main()
{
    int num1,num2,lcm,multiples;
    int i=1;
    cout<<"Enter number 1:";
    cin>>num1;
    cout<<"Enter number 2:";
    cin>>num2;
    while(true)
    {
        multiples=num1*i;
        if(multiples%num2==0)
        {
            lcm=multiples;
            break;
        }
        i++;
    }
    cout<<"LCM :"<<lcm;
    return 0;
}