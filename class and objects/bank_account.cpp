#include<iostream>
using namespace std;
class bank_account
{
    public:
string acc_name,acc_type;
int acc_num,balance,amount;

void get_data()
{
    cout<<"\nEnter the account name:";
    cin>>acc_name;
    cout<<"Enter the account number:";
    cin>>acc_num;
    cout<<"Enter the account type:";
    cin>>acc_type;
    cout<<"Enter balance amount:";
    cin>>balance;

}
void deposit()
{
    cout<<"Enter the amount to deposit:";
    cin>>amount;
    balance=balance+amount;
    cout<<"AMOUNT CREDITED SUCCESFULLY!";
    cout<<"\nBalance:"<<balance;
}
void withdraw()
{

    cout<<"Enter the amount to withdraw:";
    cin>>amount;
    balance=balance-amount;
    cout<<"AMOUNT DEBITED SUCCESFULLY!";
    cout<<"\nBalance:"<<balance;
}
};
int main()
{
    bank_account acc[3];
    for(int i=0;i<3;i++)
    {
        acc[i].get_data();
        cout<<endl;
        acc[i].deposit();
        cout<<endl;
        acc[i].withdraw();
    }

    return 0;
}