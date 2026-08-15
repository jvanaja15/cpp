#include<iostream>
using namespace std;
int main()
{
    string name="vanaja";
    int count=0;
    int i=0;
    while(name[i]!='\0')
    {
        count++;
        i++;
    }
    cout<<"length : "<<count;
    return 0;
}