#include<iostream>
using namespace std;
int main()
{
    int n=5;
    
    for(int i=0;i<n;i++)//same line
    {//z
        for(int j=0;j<n;j++)
        {
            if(i==0||i+j==n-1||i==n-1)
           
            cout<<"*";
             else 
          cout<<" ";
        }           
        cout<<" ";
//o
        for(int j=0;j<n;j++)
        {
            if(i==0||j==0||i==n-1||j==n-1)
           
            cout<<"*";
             else 
             cout<<" ";
        }  
        cout<<" ";
    
    //h
    
        for(int j=0;j<n;j++)
        {
            if(j==0||i==n/2||j==n-1)
           
            cout<<"*";
             else 
          cout<<" ";
        }           
        cout<<" ";
    //o
    
   
        for(int j=0;j<n;j++)
        {
            if(i==0||j==0||i==n-1||j==n-1)
           
            cout<<"*";
             else 
             cout<<" ";
        }  
        cout<<endl;
    }
    return 0;
}