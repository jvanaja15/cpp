#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,20,30,40,50};
    int target=80,n=5;
    bool found=false;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target){
            found=true;
            break;
        }
    }
    if(found)
    {
        cout<<"element found";
    }
    else
        {
            cout<<"element not found";
        }
    return 0;
    
}