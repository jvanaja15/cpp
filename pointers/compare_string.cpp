#include<iostream>
using namespace std;

int main()
{
    string s1="vanaja";
    string s2="vanaj";
    char *p=&s1[0];
    char *q=&s2[0];
    bool same=true;
    while(*p!='\0' && *q!='\0')//same length
    {
        if(*q!=*p )
        {
            same=false;
            break;
        }
        q++;
        p++;
    }
    if(*p != '\0' || *q != '\0')//excess length
{
    same=false;//if any one string have extra character.. lentgh becomes false.so different
}
  if(same)
  {
    cout<<"two strings are same";
  }
  else{
    cout<<"two strings are different";
  }
   
    return 0;
}