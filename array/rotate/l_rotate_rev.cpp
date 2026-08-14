#include<iostream>
using namespace std;
void reverse(int arr[],int start,int end)
{
while(start<end)
{ 
    int temp=arr[start];
     arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
}
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n=10;
    int k=5;
    k=k%n;
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    reverse(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}