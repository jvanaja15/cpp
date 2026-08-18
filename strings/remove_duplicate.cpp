#include<iostream>
using namespace std;
int main()
{
    string str="hello";
    int n=5;
    bool found[26]={false};
    for(int i=0;i<str[i]!='\0';i++)
    {
        found[str[i]-'a'];
    }
    for(int i=0;i<str[i]!='\0';i++)
    {if( found[str[i]-'a']==false)
        {
            cout<<str[i];
            found[str[i]-'a']=true;
        }
    }
    return 0;
}