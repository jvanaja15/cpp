#include<iostream>
using namespace std;
int main()
{
    int org_arr[5]={10,20,30,10,40};
    int org_size=5;
    int new_arr[5];
    int new_size=0;
for(int i=0;i<org_size;i++){
    bool found=false;
    for(int j=0;j<new_size;j++)
    {
      if(org_arr[i]==new_arr[j])
      {
        found=true;
        continue;
      }
      
    }
    if(!found)
      {
        new_arr[new_size]=org_arr[i];
        new_size++;
      }

}
for(int i=0;i<new_size;i++){
    cout<<new_arr[i]<<" ";
}
return 0;
}