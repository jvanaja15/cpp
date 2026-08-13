#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,20,30,40,50};
    int n=5;
    bool sort=true;
    for(int i=0;i<n-1;i++)
    {        
        if(arr[i]>arr[i+1])
        {
            sort=false;
            break;
        }
    }
    if(sort)
    {
        cout<<"sorted";
    }
    else{
        cout<<"not sorted";

    }
    return 0;
}