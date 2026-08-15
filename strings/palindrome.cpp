#include<iostream>
using namespace std;
int main()
{
    string str="vanaja";
    int n=0;
    while(str[n]!='\0')
    {
        n++;
    }
    int i=0;
    int j=n-1;
    bool palindrome=true;
    while(i<j)
    {
        if(str[i]!=str[j])
        {
          palindrome=false;
          break;
        }
        i++;
        j--;
    }
    if(palindrome)
    {
        cout<<"palindrome";
    }
    else{
        cout<<"not a palindrome";
    }
return 0;
}