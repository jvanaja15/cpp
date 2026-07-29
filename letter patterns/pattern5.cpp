#include<iostream>
using namespace std;
int main()
{
    int n=7;
    char a[]="program";
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j||i+j==n-1)
           
            cout<<a[i];
             else 
          cout<<" ";
        }           
        cout<<endl;
    }
    return 0;
}