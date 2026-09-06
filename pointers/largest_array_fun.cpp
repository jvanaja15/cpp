#include<iostream>
using namespace std;
int maximum(int *p,int n)
{  
    int largest=*(p);

    for(int i=1;i<n;i++)
    {
        if(largest<*(p+i))
        {
            largest=*(p+i);
        }
    }
    return largest;
}
int main()
{
    int arr[5]={24,18,20,30,15};
    cout<<maximum(arr,5);
    return 0;
}