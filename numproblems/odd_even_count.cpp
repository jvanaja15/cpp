#include<iostream>
using namespace std;
int main()
{
    int odd_count=1,even_count=1;
    int digit,n;
    cout<<"Enter the number:";
    cin>>n;
    while(n>0)
    {
        digit=n%10;
       if(digit%2==0)
       {
        even_count+=1;
       }
       else{
        odd_count+=1;
       }
        n=n/10;
    }
cout<<"count of even digits:"<<even_count<<endl;
cout<<"count of odd digits:"<<odd_count;
return 0;
}