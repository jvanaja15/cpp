#include<iostream>
using namespace std;
int main()
{
    int n,original;
    int sum=0;
    cout<<"enter a number:";
    cin>>n;
    original=n;
    for(int i = 1; i <= n-1; i++)
{
    if(n % i == 0)
    {
        sum+=i;
    }
}
if(original==sum)
{
    cout<<"it is a perfect number";
}
else{
    cout<<"it is not a perfect number";
}
    
    return 0;
}