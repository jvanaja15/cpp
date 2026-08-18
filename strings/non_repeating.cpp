#include<iostream>
using namespace std;
int main()
{string word="hello";
    int freq[26]={0};
    int n=5;
    for (int i=0;word[i]!='\0';i++)
    {
        freq[word[i]-'a']++;
    }
    for(int i=0;word[i]!='\0';i++)
    {
        if(freq[word[i]-'a']==1)
        {
            cout<<word[i];
            break;
        }
    }
return 0;
}