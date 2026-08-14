#include<iostream>
using namespace std;
int main()
{
int arr[5]={1,2,1,1,2};
int n=5;
int candidate=0;
int count=0;
for(int i=0;i<n;i++)
{ 
    if(count==0)
    {
        candidate=arr[i];
        count++;
    }
    else if(arr[i]==candidate)
    {
        count++;
    }
    else{
        count--;
    }
}
cout<<"majority element is "<<candidate;
return 0;
}