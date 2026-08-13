#include<iostream>
using namespace std;
int main()
{
    int arr[5]={20,10,40,80,30};
    int n=5;
    int max=0;
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int sec_max=0;
    for(int i=1;i<n;i++){
        if(arr[i]>sec_max && arr[i]!=max){
            sec_max=arr[i];        }
    }
    cout<<"Largest number is "<<max<<endl;
    cout<<"Second largest number is "<<sec_max;
    return 0;
}