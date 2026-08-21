#include<iostream>
using namespace std;

int main()
{
 string str="aaabbc";
 int n=0;
 while(str[n]!=0)
 {
    n++;
 }
 int i=0;
 while(i<n)
 {
    char current=str[i];
    int count=0;
 while(i<n && str[i]==current)
 {
    count++;
    i++;
 }
 cout<<current<<count;
}
    return 0;
 }
