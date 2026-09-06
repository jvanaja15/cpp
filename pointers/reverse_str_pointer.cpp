#include<iostream>
using namespace std;

int main()
{
    string name="vanaja";
   char *p=&name[0];
   int len=0;
   while(*p!='\0'){
    len++;
    p++;
   } 
   p=&name[0];//loop end la pointer null la irukum so restart.
    char *start=p;
    char *end=p+len-1;
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