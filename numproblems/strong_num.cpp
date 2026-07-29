#include<iostream>
using namespace std;
int main()
{
    int n,original,digit;
    int sum=0;
    
    cout<<"enter a number:";
    cin>>n;
    original=n;
    while(n>0)
    {
        int fact=1;
        digit=n%10;
        for(int i=1;i<=digit;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;

    }

if(original==sum)
{
    cout<<"it is a strong number";
}
else{
    cout<<"it is not a strong number";
}
    
    return 0;
}