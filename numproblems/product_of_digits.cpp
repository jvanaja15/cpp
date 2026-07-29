#include<iostream>
using namespace std;
int main()
{
    int product=1;
    int digit,n;
    cout<<"Enter the number:";
    cin>>n;
    while(n>0)
    {
        digit=n%10;
        product=product*digit;
        n=n/10;
    }
cout<<"product of digits:"<<product;
return 0;
}