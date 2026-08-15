#include<iostream>
using namespace std;
int main()
{
 string str="vanaja";
 int i=0,vowels=0,consonants=0;
 while(str[i]!='\0')
 {
//alphabets
if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
{
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
    str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
    {
        vowels++;
    }
    else{
        consonants++;
    }
}
i++;
 }
 cout<<"vowels="<<vowels<<endl;
 cout<<"consonants="<<consonants;
return 0;
}