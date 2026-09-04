#include<iostream>
using namespace std;
int maximum(int a,int b){
    if(a>b)
    {
        return a;
    }
    else{
        return b;
    }
}
int main()
{   int a=30,b=50;
   int greater= maximum(a,b);
   cout<<greater<<" is greater";
    return 0;
} 