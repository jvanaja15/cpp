#include<iostream>
using namespace std;
bool ispalindrome(int n)
{
    int org=n,reverse=0;
    while(n>0)
    {
         reverse=reverse*10+(n%10);
        n=n/10;
    }
    if(org==reverse)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    bool palindrome=ispalindrome(1234);
    if(palindrome)
    {
        cout<<"Palindrome";
    }
    else{
        cout<<"Not a palindrome";
    }
    return 0;
}