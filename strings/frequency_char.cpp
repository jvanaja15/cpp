#include<iostream>
using namespace std;
int main()
{
    string name="vanaja";
    int count=0;
    char ch='a';
    for(int i=0;name[i]!='\0';i++)
    {
        if(name[i]==ch)
        {
            count++;
        }
    }
    cout<<"count "<<count;
    return 0;
}
