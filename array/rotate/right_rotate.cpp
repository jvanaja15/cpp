#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,20,30,40,50};
    int n=5;
    int temp=arr[n-1];
    int i;
    for(i=n-2;i>=0;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=temp;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}