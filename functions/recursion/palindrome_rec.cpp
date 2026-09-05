#include<iostream>
using namespace std;

int reverse(int n,int rev)
{if(n==0)
    {
        return rev;
    }
 
    rev=rev*10+(n%10);
    
    return reverse(n/10,rev);
}
int main()
{
    int n=1221;
    int org=n;
   int rev= reverse(n,0);
    if(org==rev)
    {
cout<<"palindrome";
    }
    else{
        cout<<"not a palindrome";
    }
    return 0;
}