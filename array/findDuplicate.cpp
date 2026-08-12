#include<iostream>
using namespace std;
int main()
{
    int arr[8]={10,20,10,30,10,10,20,20};
    int n=8;
    for(int i=0;i<n;i++)
    {
        bool checked=false;
        for(int k=0;k<i;k++)
        {
            if(arr[i]==arr[k])
            {
                checked=true;
                break;
            }
        }
        if(checked)
        {
            continue;
        }
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<arr[i]<<" ";
                 break;
            }
            
        }
    }
    return 0;
}