#include<iostream>
using namespace std;
int main()
{
    string name="vanaja";
    char *p=&name[0];
    while(*p!='\0')
    {
        cout<<*p++;
    }
return 0;
}