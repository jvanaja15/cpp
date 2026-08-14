#include<iostream>
using namespace std;
int main()
{
int arr[5]={1,2,1,1,2};
int n=5;
for(int i=0;i<n;i++)
{ int count=0;
    for(int j=0;j<n;j++){
        if(arr[i]==arr[j])
        {
            count++;
        }
    }
    if(count>n/2)
        {
            cout<<"majority element is "<<arr[i];
            break;
        }
}

return 0;
}