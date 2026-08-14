#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    int b[5]={2,4,6,7,8,};
    int n=5;
    int unionarr[10];
    int k=0;
    for(int i=0;i<n;i++)
    {
        unionarr[k]=a[i];
        k++;
    }
    for(int i=0;i<n;i++)
    {
        bool found=false;
         for(int j=0;j<k;j++)
            {
                if(b[i]==unionarr[j])
                {
                    found=true;
                    break;
                }
            }
        if(found==false)
        {
            unionarr[k]=b[i];
            k++;
        }       
     }
   

    for(int i=0;i<k;i++)
    {
        cout<<unionarr[i]<<" ";
    }
    return 0;
}