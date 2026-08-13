#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,20,10,30,20};
    int n=5;
    bool visited[5]={false};
    for(int i=0;i<n;i++)
    {
        if(visited[i])
            {
                continue;
            }
            int count=0;
        for(int j=i;j<n;j++)
        { 
            if(arr[i]==arr[j])
            {
                count++;
                visited[j]=true;
            }
                
         }
           cout<<arr[i]<<" occurs "<<count<<" times"<<endl; 
    }
    return 0;
}