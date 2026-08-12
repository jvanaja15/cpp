#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,20,30,40,50};
int temp;
temp=arr[2];
arr[2]=arr[3];
arr[3]=temp;
for(int i=0;i<5;i++)
{
cout<<arr[i]<<" ";
}
return 0;
}