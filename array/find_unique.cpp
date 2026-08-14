#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,20,10,40,30};
    int n=5;
    for(int i=0;i<n;i++)
    {
        bool found=false;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j)
            {
                found=true;
                break;
            }
        }
        if(!found)
        {
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}