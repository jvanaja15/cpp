#include<iostream>
using namespace std;
class Bank
{
private:
int balance;
public:

void setBalance(int b)
{
    if(b>0)
    {
       balance=b;
    }
  
}
int getBalance()
{
    return balance;
}
};
int main()
{
    Bank b;
    b.setBalance(5000);
    cout<<"Marks:"<<b.getBalance();
    return 0;
}