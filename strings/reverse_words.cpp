#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str="hello world";
    int n=0;
    while(str[n]!=0)
    {
        n++;
    }
    int end=n-1;
    for(int i=n-1;i>=0;i--)
    {
        if(str[i]==' '){
            for(int j=i+1;j<=end;j++)
            {
                cout<<str[j];
            }
            cout<<" ";
            end=i-1;
        }
    }
    for(int i=0;i<=end;i++)
    {
        cout<<str[i];
    }
    return 0;
}
