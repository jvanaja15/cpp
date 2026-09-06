#include<iostream>
using namespace std;
void reverse(int *p,int n)
{
    int *start=p;
    int *end=p+n-1;
    while(start<end)
    {
        int temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
}
int main()
{
    int arr[5]={24,18,20,30,15};
    reverse(arr,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}