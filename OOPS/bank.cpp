/*Q79-Solve the following problem for n employee detailsWrite an object oriented program in C++ with account having following attributes such as
acno. , acc.holder’s name ,address ,contact no. ,amount. Write the following operations over
one account holder record-1)Opening an account 2)Printing account information(tabular
form) 3)Deposit amount in the account 4)Withdraw amount from account.*/
#include<iostream> 
#include<math.h> 
using namespace std; 
class bank 
{ 
int account_no,contact_no,amount; 
string acholder_name,address; 
public: 
void OpeningAccount(); 
void PrintingAccountInfo(); 
void deposit(); 
void withdraw(); 
}; 
void bank::OpeningAccount() 
{ 
unsigned int ac_no,c_no,amt; 
char ac_name[20],ac_add[40]; 
cout<<"Enter the Account Number :"<<endl; 
cin>>ac_no; 
cout<<"Enter the Account Holder's Name :"<<endl; fflush(stdin); 
fflush(stdin);
cin.getline(ac_name,20);
cout<<"Enter the address of the Account Holder:"<<endl; fflush(stdin); 
fflush(stdin);
cin.getline(ac_add,40);
cout<<"Enter the contact number of the Account holder:"<<endl; cin>>c_no; 
cout<<"Enter the Account balance:"<<endl; 
cin>>amt; 
account_no=ac_no; 
contact_no=c_no; 
amount=amt; 
acholder_name=ac_name;
address=ac_add; 
} 
void bank::PrintingAccountInfo() 
{ 
cout<<"ACCOUNT NUMBER \t ACCOUNT HOLDER'S NAME \t ADDRESS \t CONTACT NUMBER \t AMOUNT"<<endl; 
cout<<account_no <<"\t\t" 
<<acholder_name<<"\t\t"<<address<<"\t\t"<<contact_no<<"\t\t"<<amount<<endl; } 
void bank::deposit() 
{ 
int a; 
cout<<"Enter the amount to be deposited:"<<endl; 
cin>>a; 
amount+=a; 
} 
void bank::withdraw() 
{ 
int a; 
cout<<"Enter the amount to be withdrawn:"<<endl; 
cin>>a; 
amount-=a; 
} 
int main() 
{ 
bank b1; 
int choice; 
while(1) 
{ 
cout<<"Enter choice:"<<endl; 
cout<<"1 Open Account"<<endl; 
cout<<"2 Deposit"<<endl; 
cout<<"3 Account Info"<<endl; 
cout<<"4 withdraw"<<endl; 
fflush(stdin);
cin>>choice; 
switch(choice) 
{ 
case 1: 
b1.OpeningAccount(); 
break; 
case 2: 
b1.deposit(); 
b1.PrintingAccountInfo(); 
break; 
case 3: 
b1.PrintingAccountInfo(); 
break; 
case 4: 
b1.withdraw(); 
b1.PrintingAccountInfo(); 
break; 
default: 
cout<<"Enter valid choice"<<endl; } 
} 
return 0; 
}

