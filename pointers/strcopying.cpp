#include<iostream>
using namespace std;

int main()
{
    string s1="vanaja";
    char s2[100];
    char *p=&s1[0];
    char *q=&s2[0];
    while(*p!='\0')
    {
        *q=*p;
        q++;
        p++;
    }
    *q='\0';//to tell that str2 end
    cout<<s2;
    return 0;
}