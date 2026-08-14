#include<iostream>
using namespace std;
int main()
{
    int arr[5]={0,3,0,2,4};
    int n=5;
    int index=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
           arr[index]=arr[i];
           index++;
        }

    }
    for(int i=index;i<n;i++)
    {
        arr[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}