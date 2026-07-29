#include<iostream>
using namespace std;
int main()
{
    int n=5;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(j==n/2||i==n/2)
            {
                cout<<"*";
            }
            else{
                cout<<" ";

            }
        }
        cout<<endl;
    }
    return 0;
}