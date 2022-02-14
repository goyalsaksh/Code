#include <iostream>
#include <stdlib.h>
using namespace std;
class Account
{
public:
    int accno;
    char accname[30];
    char address[30];
    long int contactno;
    int amount;

    void set_data();
    void display();
    void deposit();
    void withdraw();
};
void Account ::set_data()
{
    cout << "Enter Account number:";
    cin >> accno;
    cout << "Enter Account Holder name:";
    fflush(stdin);
    cin.getline(accname, 30);
    cout << "Enter Account Holder Address:";
    fflush(stdin);
    cin.getline(address, 30);
    cout << "Enter Account Holder Contact number:";
    cin >> contactno;
    cout << "Enter Amount:";
    cin >> amount;
}
void Account ::display()
{
    cout << accno << "\t" << accname << "\t" << address << "\t" << contactno << "\t" << amount;
}
void Account ::deposit()
{
    int add;
    cout << "\nEnter amount to be Deposit:";
    cin >> add;
    amount = amount + add;
}
void Account ::withdraw()
{
    int sub;
    cout << "\nEnter amount to Withdraw:";
    cin >> sub;
    amount = amount - sub;
}
int main()
{
    Account a1;
    int choice;
    while (1)
    {
        cout << "\n1.Opening an account\n2.Printing account information\n3.Deposit amount in account\n4.Withdraw amount from account\n5.Exit\nEnter your choice:";
        cin >> choice;
        switch (choice)
        {
        case 1:
            a1.set_data();
            break;
        case 2:
            cout << "Account number\tAccount Holder name\tAddress\tContact number\tAmount\n";
            a1.display();
            break;
        case 3:
            a1.deposit();
            cout << endl
                 << "\nAccount Holder details after Deposit:";
            a1.display();
            break;
        case 4:
            a1.withdraw();
            cout << endl
                 << "Account Holder details after Withdraw:";
            a1.display();
            break;
        case 5:
            exit(0);
            break;
        default:
            cout << "Enter Valid choice";
        }
    }
}