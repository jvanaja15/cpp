#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,20,30,40,50};
    int n=5;
    
    for(int k=0;k<2;k++)
    {
    int temp=arr[0];
  
    for(int i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}