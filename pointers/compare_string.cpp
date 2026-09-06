#include<iostream>
using namespace std;

int main()
{
    string s1="va";
    string s2="va";
    char *p=&s1[0];
    char *q=&s2[0];
    bool same=true;
    while(*p!='\0' || *q!='\0')//atleast one string has character
    {
        if(*q!=*p )
        {
            same=false;
            break;
        }
        q++;
        p++;
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