#include<iostream>
using namespace std;
int main()
{
    string name="vanaja";
    int n=0;
    while(name[n]!='\0')//length
    {
        n++;
    }
    int i=0;
    int j=n-1;
//reverse
while(i<j){
    char temp=name[i];
    name[i]=name[j];
    name[j]=temp;
    i++;
    j--;
}
cout<<"reversed:"<<name;
}