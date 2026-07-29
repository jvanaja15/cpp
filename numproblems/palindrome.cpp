#include<iostream>
using namespace std;
int main()
{
    int rev=0;
    int digit,n,org;
    cout<<"Enter the number:";
    cin>>n;
    org=n;
    while(n>0)
    {
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
if(org==rev)
cout<<"palindrome";
else
cout<<"not a palindrome";
return 0;
}