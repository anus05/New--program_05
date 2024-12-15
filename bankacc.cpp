//Write a C++ program to implement a class called BankAccount that has private member variables for account number and balance.
// Include member functions to deposit and withdraw money from the account.

#include <iostream>
using namespace std;

static float amount;

class BankAccount
{
    // private data members
    string account_number;
    float balance;
    
    // public member functions
    public:
        void getAccountDetails(void);
        void displayAccountDetails(void);
        void deposit(void);
        void withdraw(void);
}person1, person2;

// member function definitions
void BankAccount :: getAccountDetails(void)
{
    cout << "Enter your account number: ";
    cin >> account_number;
    cout << "Enter your balance: ";
    cin >> balance;
}

void BankAccount :: displayAccountDetails(void)
{
    cout << "Your Account Number: " << account_number << endl;
    cout << "Your balance: " << balance << endl;
}

void BankAccount :: deposit(void)
{
    balance += amount;
    cout << "New Balance: " << balance << endl;
}

void BankAccount :: withdraw(void)
{
    balance -= amount;
    cout << "New Balance: " << balance << endl;
}

int main()
{
    int choice = 0;
    char person;
    
    // before transactions
    person1.getAccountDetails();
    person2.getAccountDetails();
    person1.displayAccountDetails();
    person2.displayAccountDetails();
    
    cout << "Whether you are Person1 or Person2? (press 'p' for Person1 and 'q' for Person2)" << endl;
    cin >> person; 
    
    // getting the operation choice
    cout << "Enter your choice: " << endl;  
    cout << "Press 1 to DEPOSIT" << endl;
    cout << "Press 2 to WITHDRAW" << endl;
    cin >> choice;
    
    // for DEPOSIT and WITHDRAW
    if(person == 'p')
    {
        if(choice == 1)
        {
            cout<<"Enter the amount to be deposited : ";
            cin>>amount;
            person1.deposit();
            person2.withdraw();
            person1.displayAccountDetails();
            person2.displayAccountDetails();
        }
        else if(choice == 2)
        {
            cout<<"Enter the amount to be withdrawn : ";
            cin>>amount;
            person1.withdraw();
            person2.deposit();
            person1.displayAccountDetails();
            person2.displayAccountDetails();
        }
        
    }
    else if (person == 'q')
    {
        if(choice == 1)
        {
            cout<<"Enter the amount to be deposited : ";
            cin>>amount;
            person2.deposit();
            person1.withdraw();
            person1.displayAccountDetails();
            person2.displayAccountDetails();
        }
        else if(choice == 2)
        {
            cout<<"Enter the amount to be withdrawn : ";
            cin>>amount;
            person2.withdraw();
            person1.deposit();
            person1.displayAccountDetails();
            person2.displayAccountDetails();
        }
    }
    
}