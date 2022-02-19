/*Q48:Write an object oriented program in C++ with account having following attributes such
as acno. , acc.holder’s name ,address ,contact no. ,amount. Write the following operations
over one account holder record-1)Opening an account 2)Printing account
information(tabular form) 3)Deposit amount in the account 4)Withdraw amount from
account*/
#include<iostream> 
using namespace std; 
class Account 
{ 
int accno,accnum,acamt; 
char acchname[200],accaddr[200]; 
public: 
void set_data(); 
void print(); 
void deposit(); 
void withdraw(); 
};
void Account::set_data() 
{ 
cout<<"entertheaccountnumber:"; cin>>accno;; 
fflush(stdin); 
cout<<"entertheaccountholder'sname:"; cin.getline(acchname,200); 
cout<<"entertheaccountholder'saddress':"; cin.getline(accaddr,200); 
cout<<"entertheircontactnumber:"; cin>>accnum;; 
cout<<"entertheamount:"; 
cin>>acamt; 
} 
void Account::print() 
{ 
cout<<endl<<accno<<"\t"<<acchname<<"\t"<<accaddr<<"\t"<<acamt;
} 
void Account::deposit() 
{ 
int depamt;
cout<<"\n\nentertheamounttobedeposited:"; cin>>depamt; 
acamt=acamt+depamt; 
} 
void Account::withdraw() 
{ 
int wamt; 
cout<<"\n\nentertheamounttowithdraw:"; cin>>wamt; 
acamt=acamt-wamt; 
} 
int main() 
{ 
int ch; 
Account holder; 
cout<<"\n\n\t\tMENU"<<endl<<"1.Openanaccount\n2.Printaccount information\n3.Deposit\n4.Withdraw\n5.Exit\n"; while(1) 
{ 
cout<<endl<<"Enteryourchoice:"; cin>>ch;
switch(ch) 
{ 
case1:holder.set_data(); 
cout<<"ACCOUNTCREATEDSUCCESSFULLY!";
break; 
case2:holder.print(); 
break; 
case3:holder.deposit(); 
cout<<endl<<"Accountholderdetailsafter deposit"<<endl; 
holder.print(); 
break; 
case4:holder.withdraw(); 
cout<<endl<<"Accountholderdetailsafter withdraw"<<endl; 
holder.print(); 
break; 
case5:exit(0); 
default:cout<<"invalidchoice"; 
}
}
return 0; 
}

