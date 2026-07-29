#include<iostream>
using namespace std;
int main()
{
int n=5;
int h=(n/2)+1;
    for(int i=1;i<=n;i++)
    {
        if (i<=h)
       {for(int s=1;s<=h-i;s++)
        {
            cout<<" ";
        }           
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
        else
        {
           for(int s=1;s<=i-h;s++)
        {
            cout<<" ";
        }           
        for(int j=1;j<=2*(n-i)+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    } 
}
    return 0;
}