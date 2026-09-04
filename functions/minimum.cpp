#include<iostream>
using namespace std;
int min(int a,int b){
    if(a<b)
    {
        return a;
    }
    else{
        return b;
    }
}
int main()
{   int a=30,b=50;
   int minimum= min(a,b);
   cout<<minimum<<" is smaller";
    return 0;
} 