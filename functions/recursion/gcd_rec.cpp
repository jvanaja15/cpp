#include<iostream>
using namespace std;
int gcd(int a, int b)
{
    if(b == 0)
        return a;

    return gcd(b, a % b);
}
int main()
{
    int ans=gcd(24,10);
    cout<<ans;
    return 0;
}