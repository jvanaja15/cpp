#include<iostream>
using namespace std;

int main()
{
    int arr[5]={24,18,20,30,15};
    int *p=arr;
    int n=5,largest=*(p);
    for(int i=1;i<n;i++)
    {
        if(largest<*(p+i))
        {
            largest=*(p+i);
        }
    }
    cout<<"largest="<<largest;
    return 0;
}