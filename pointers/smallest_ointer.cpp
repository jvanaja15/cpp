#include<iostream>
using namespace std;

int main()
{
    int arr[5]={24,18,20,30,15};
    int *p=arr;
    int n=5,smallest=*(p);
    for(int i=1;i<n;i++)
    {
        if(smallest>*(p+i))
        {
            smallest=*(p+i);
        }
    }
    cout<<"smallest="<<smallest;
    return 0;
}