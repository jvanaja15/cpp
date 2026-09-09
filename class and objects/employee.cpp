#include<iostream>
using namespace std;
class employee
{
    
    public:
    string name;
    int basic,bonus;
    void get_data()
    {
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the basic salary:";
        cin>>basic;
    }
    void salary()
    {
        bonus=(basic*10)/100;
        int total=basic+bonus;
        cout<<"calculated salary:"<<total;
    }
    
};
int main()
{
    employee e1,e2;
    e1.get_data();
    e1.salary();
    cout<<endl;
    e2.get_data();
    e2.salary();

    return 0;
}