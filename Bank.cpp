/*Write a C++ program to implement a class called BankAccount that has private member variables for account number and balance.
 Include member functions to deposit and withdraw money from the account.*/
 #include<iostream>
 using namespace std;
 static float amount;
 class BankAccount
 {
    private:
        int account_number;
        float balance;
    public:
        void getAccountdetails(void);
        void display(void) ;
        void deposit(void);
        void withdraw(void); 
 }person1,person2;
 void BankAccount::getAccountdetails()
 {
    cout<<"Enter your account number : "<<endl;
    cin>>account_number;
    cout<<"Enter your balance : "<<endl;
    cin>>balance;

 }
 void BankAccount::display()
{   cout<<" Account number : "<<account_number<<endl;
    cout<<" Balance : "<<balance<<endl;
}    
void BankAccount::deposit()
{
    balance+=amount;
    cout<<"New Blance : "<<balance<<endl;

}
void BankAccount::withdraw()
{
    balance-=amount;
    cout<<"New Blance : "<<balance<<endl;

}
int main()
{
    int choice = 0;
    char person;
    
    // before transactions
    person1.getAccountdetails();
    person2.getAccountdetails();
    person1.display();
    person2.display();
    
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
            person1.display();
            person2.display();
        }
        else if(choice == 2)
        {
            cout<<"Enter the amount to be withdrawn : ";
            cin>>amount;
            person1.withdraw();
            person2.deposit();
            person1.display();
            person2.display();
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
            person1.display();
            person2.display();
        }
        else if(choice == 2)
        {
            cout<<"Enter the amount to be withdrawn : ";
            cin>>amount;
            person2.withdraw();
            person1.deposit();
            person1.display();
            person2.display();
        }
    }
}
