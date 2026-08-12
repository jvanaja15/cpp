#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,20,30,20,20};
    int target=20,n=5;
   int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target){
            count++;
        }
    }
    cout<<"count="<<count;
    return 0;
    
}