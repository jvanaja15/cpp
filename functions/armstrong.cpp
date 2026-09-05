#include<iostream>
using namespace std;
void isarmstrong(int n)
{
    int digit,org=n,sum=0;
    while(n>0)
    {
        digit=n%10;
        sum=sum+digit*digit*digit;
        n=n/10;
    }
    if(org==sum)
    {
        cout<<"armstrong"<<endl;
    }
    else{
        cout<<"not an armstrong"<<endl;
    }
}

    int main()
{
    isarmstrong(153);
    isarmstrong(123);
    isarmstrong(370);

    return 0;
}
