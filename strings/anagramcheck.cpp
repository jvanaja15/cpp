#include<iostream>
#include<string.h>
using namespace std;
int main()
{
string str1="silent";
string str2="listen";
int freq[26]={0};
int i,n1=0,n2=0;
i=0;
while(str1[i]!=0)
{
n1++;
i++;
}
i=0;
while(str2[i]!=0)
{
    n2++;
    i++;
}
if(n1!=n2)
{
    cout<<"not anagram";
    return 0;
}

 for(int i=0;i<n1;i++)
    {
    freq[str1[i]-'a']++;
    freq[str2[i]-'a']--;
        
    }

bool isanagram=true;
for(int i=0;i<26;i++)
{
    if(freq[i]!=0)
    {
       isanagram=false;
    }
    
}
if(isanagram)
{
    cout<<"anagram";
}
else{
    cout<<"not anagram";
}
return 0;
}