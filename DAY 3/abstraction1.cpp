#include<iostream>
using namespace std;

class BankAccount
{
    private:
        int balance;
    public:
        BankAccount(int myBalance)
        {
            if(myBalance>0)
            {
                balance=myBalance;

            }
            else
            {
                balance=0;
            }
        }
        void deposit(int amount)
        {
            if(amount>0)
            {
                balance+=amount;
            }
            cout<<"you deposited:  "<<amount<<endl;
        }
        void withdraw(int amount)
        {
            if(amount>0 && amount<=balance)
            {
                balance-=amount;
            }
            else
            {
                cout<<"insufficient balance"<<endl;
            }
        }

        int getBalance() const
        {
            return balance;
        }

};
int main()
{
    BankAccount b1(2000);
    cout<<"your current balance is:  "<<b1.getBalance()<<endl;
    b1.deposit(5000);
    cout<<"your current balance after deposit is :  "<<b1.getBalance()<<endl;
    b1.withdraw(500);
    cout<<"your current balance after withdrawl is :  "<<b1.getBalance()<<endl;
    return 0;
}
