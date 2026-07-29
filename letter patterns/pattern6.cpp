#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string a="program";   
    for(int i=0;i<a.length();i++)
    {
        for(int j=0;j<a.length();j++)
        {
            if(i==j||i+j==a.length()-1)
           
            cout<<a[i];
             else 
          cout<<" ";
        }           
        cout<<endl;
    }
    return 0;
}