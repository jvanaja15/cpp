#include<iostream>
using namespace std;

int main()
{
    string name="vanaja";
    char *p=&name[0];
    int length=0;
    while(*p!='\0')
    {
        length++;
        *p++;
    }
    cout<<"length of the string is = "<<length;
    return 0;
}