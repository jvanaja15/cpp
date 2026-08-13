#include<iostream>
using namespace std;
int main()
{
    int arr[5]={20,10,40,80,30};
    int n=5;
    int min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    int sec_min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<sec_min && arr[i]!=min){
            sec_min=arr[i];        }
    }
    cout<<"Smallest number is "<<min<<endl;
    cout<<"Second smallest number is "<<sec_min;
    return 0;
}