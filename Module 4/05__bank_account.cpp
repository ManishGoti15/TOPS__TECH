#include <iostream>
using namespace std;

class bank
{
private:
    string name;
    long int accno;
    string acc_type;
    long int balance;

public:
    bank(){};
    bank(string n, long int ano, long int bal, string sa)
    {
        name = n;
        accno = ano;
        balance = bal;
        acc_type = sa;
    }
    void setdata()
    {
        acc_type = "saving";
        cout << "enter the name of account holder : " << endl;
        cin >> name;
        cout << "enter the account number of candidate : " << endl;
        cin >> accno;
        cout << "enter the balance : " << endl;
        cin >> balance;
    }
    void check();
    void deposit();
    void display();
};

void bank ::deposit()
{
    long int amount;
    cout << "how much money do you want to deposit : " << endl;
    cin >> amount;
    balance = balance + amount;
}

void bank ::check()
{
    long int amnt;
    cout << "how much money do you want to withdraw : " << endl;
    cin >> amnt;
    if (balance > amnt)
    {
        balance = balance - amnt;
    }
    else
        cout << "you have unsufficient balance that you cant withdraw money :" << endl;
}

void bank ::display()
{
    cout << "name of candidate is " << name << endl;
    cout << "account no. :" << accno << endl;
    cout << "account type : " << acc_type << endl;
    cout << "total balance in your account is Rs. " << balance << endl;
}

int main()
{
    bank candidate;
    candidate.setdata();
    candidate.deposit();
    candidate.check();
    candidate.display();
}
