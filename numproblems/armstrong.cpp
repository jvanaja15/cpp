#include<iostream>
using namespace std;
int main()
{
    int sum=0,n=103;
    int digit,original;
    original=n;
    while(n>0)
    {
        digit=n%10;
        sum=sum+(digit*digit*digit);       
        n=n/10;
    }
    if(sum==original)
    {
        cout<<"Armstrong";
    }
    else{
        cout<<"not armstrong";
    }

return 0;
}