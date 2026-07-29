#include<iostream>
using namespace std;
int main()
{
    int n=5;
    
    for(int i=0;i<n;i++)//same line
    {//r
        for(int j=0;j<n;j++)
        {
            if(i==0||j==0||i==n/2||i==j&&i>=n/2||(j==n-1&&i<n/2))
           
            cout<<"*";
             else 
          cout<<" ";
        }           
        cout<<" ";
//a
        for(int j=0;j<n;j++)
        {
            if(i==0||j==0||i==n/2||j==n-1)
           
            cout<<"*";
             else 
             cout<<" ";
        }  
        cout<<" ";
    
    //g
    
        for(int j=0;j<n;j++)
        {
            if(i==0||j==0||i==n/2&&j>=n/2||i==n-1||j==0&&i<n/2||(j==n-1&&i>n/2))
           
            cout<<"*";
             else 
          cout<<" ";
        }           
        cout<<" ";
    //u 
        for(int j=0;j<n;j++)
        {
            if(j==0||i==n-1||j==n-1)
           
            cout<<"*";
             else 
             cout<<" ";
        }  
        cout<<endl;
    }
    return 0;
}