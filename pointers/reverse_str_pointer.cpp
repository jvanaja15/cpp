#include<iostream>
using namespace std;

int main()
{
    string name="vanaja";
   char *p=&name[0];
    int n=6;
    char *start=p;
    char *end=p+n-1;
    while(start<end)
    {
        char temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
   while(*p!='\0')
   {
    cout<<*p++;
   }
    return 0;
}