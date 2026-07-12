#include<iostream>
using namespace std;


class ATM{
    private:
    int balance; // balance is hidden, but we interact with it through functions. This is encapsulation
    public:
    ATM (){
        balance = 0;
        cout << "Account created" <<endl;
    }

    void deposit(int amount){
        balance += amount;
    }

    void withdraw(int amount){
        if (amount <= balance){
            balance -= amount;
        }
    }

    int getbalance(){
        return balance;
    }
};

int main(){
    ATM obj;
    cout << obj.getbalance() <<endl;
    obj.deposit(15000);
    obj.withdraw(10000);
    cout << obj.getbalance() << endl;

}