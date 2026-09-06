#include<iostream>
using namespace std;

int main()
{
    int arr[5]={24,18,20,30,15};
    int *p=arr;
    int n=5,sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+*(p+i);
    }
    cout<<"sum="<<sum;
    return 0;
}