#include<iostream>
using namespace std;

class BankAccount{
    private:
    double balance;
    bool hasSufficientBalance(double amount){
        if (balance >= amount){
            return true;
        }
    }
    public:
    void withDraw(double amount){
        if (hasSufficientBalance(amount)){
            balance -= amount;
        }
    }

};
