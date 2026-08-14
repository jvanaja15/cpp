#include<iostream>
using namespace std;
int main()
{
    int arr[5]={21,22,24,25,26};
    int n=5;
    int ex_sum=0;
    int org_sum=0;
    for(int i=21;i<=26;i++)
    {
        ex_sum=ex_sum+i;
    }
    for(int i=0;i<n;i++)
{
    org_sum=org_sum+arr[i];
}
int missing=ex_sum-org_sum;
cout<<"missing element:"<<missing;
return 0;
}