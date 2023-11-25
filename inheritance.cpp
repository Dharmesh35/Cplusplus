#include <bits/stdc++.h>
using namespace std;

class Account{
public:
    Account(double balance){

        if (balance < 0.0){
            cout<< "Error: initial balance cannot be negative." << endl;
            mbalance = 0.0;
        }
        else{
            mbalance = balance;
        }
    }

    virtual ~Account() {}

    double getBalance() {
        return mbalance;
    }

    virtual void credit(double amount){
        mbalance += amount;
        cout<<"Successfully credited";
    }

    virtual bool debit(double amount){
        if (amount > mbalance){
            cout<< "debit amount exceeds account balance" << endl;
            return false;
        }
        else{
            mbalance -= amount;
            return true;
        }
    }

protected:
    double mbalance;
};

class SavingsAccount : public Account{
public:
    SavingsAccount(double balance, double interestRate): Account(balance), m_interestRate(interestRate) {}

    double calculateInterest() const{
        return mbalance * m_interestRate / 100.0;
    }

    virtual void credit(double amount) override{
        Account::credit(amount);
        cout << "Interest added: " << calculateInterest() << endl;
        Account::credit(calculateInterest());
    }

protected:
    double m_interestRate;
};

class CheckingAccount : public Account{
public:
    CheckingAccount(double balance, double fee): Account(balance), mfee(fee) {}

    virtual bool debit(double amount) override{
        if (Account::debit(amount)){
            mbalance -= mfee;
            return true;
        }
        else{
            return false;
        }
    }

    virtual void credit(double amount) override{
        Account::credit(amount);
        mbalance -= mfee;
    }

protected:
    double mfee;
};

int main()
{
    Account account(1000);
    cout << "Initial balance: " << account.getBalance() << endl;

    SavingsAccount savingsAccount(2000, 1.5);
    cout << "Initial savings balance: " << savingsAccount.getBalance() << endl;

    savingsAccount.credit(100);
    cout << "New savings balance: " << savingsAccount.getBalance() << endl;

    CheckingAccount checkingAccount(3000, 0.5);
    cout << "Initial checking balance: " << checkingAccount.getBalance() << endl;

    checkingAccount.credit(200);
    cout << "New checking balance: " << checkingAccount.getBalance() << endl;

    checkingAccount.debit(500);
    cout << "New checking balance after debit: " << checkingAccount.getBalance() << endl;

    return 0;
}

