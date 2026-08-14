#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    int b[5]={2,4,6,7,8,};
    int n=5;
    int common[n];
    int k=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                common[k]=a[i];
                k++;
            }
        }
    }
    for(int i=0;i<k;i++)
    {
        cout<<common[i]<<" ";
    }
    return 0;

}