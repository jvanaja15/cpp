#include<iostream>
using namespace std;
int main()
{
    int a[]={1,3,5,7,9};
    int b[]={2,4,6,8};
    int n1=5;
    int n2=4;
    int result[9];
    int i=0,j=0,k=0;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j]){
            result[k]=a[i];
            i++;
        }
         else 
         {
            result[k]=b[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        result[k]=a[i];
        i++;
        k++;
    }
     while(j<n2)
    {
        result[k]=b[j];
        j++;
        k++;
    }
    for(int x=0;x<n1+n2;x++)
    {
        cout<<result[x]<<" ";
    }
    return 0;
}