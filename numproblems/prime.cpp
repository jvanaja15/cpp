#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=2;i<=n;i++)// 1 not prime nu theriyum so 2to n varaikum print panalam
    {  
         bool isprime=true;//i than present iteration number adhu true ah ilaya nu check pana podhum
        
         for(int j=2;j<i;j++)// namma eduthuruka number prime ah nu check pana
        {
           if(i%j==0)
            {
           isprime=false;//not prime
           break;//answer therinjuruchu so loop ah stop panu
            }
        }

       if(isprime)//i prime ah nu paaka
    {
        cout<<i<<" ";//andha i ya print pana
    } 
    }
    return 0;
}
     