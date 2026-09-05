#include<iostream>
using namespace std;
int armstrong(int n,int sum)
{
    if(n==0)
   {
    return sum;
   }
   int digit=n%10;
   sum=sum+digit*digit*digit;
   return armstrong(n/10,sum);
}
int main()
{   int n=153;
    int org=n;
    int sum=armstrong(n,0);
    if(org==sum)
    {
    cout<<"armstrong";
    }
    else{
        cout<<"not an armstrong";
    }
    return 0;
}