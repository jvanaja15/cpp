#include<iostream>
using namespace std;
int main()
{
    int count=0;
    int digit,n,target;
    cout<<"Enter the number:";
    cin>>n;
    cout<<"Enter the target:";
    cin>>target;
    while(n>0)
    {
        digit=n%10;
       if(digit==target)
       {
        count++;
       }
       
        n=n/10;
    }
cout<<"frequency of target digit:"<<count;

return 0;
}