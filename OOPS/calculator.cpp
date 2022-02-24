/*Q21. Write a C++ program to accept one mathematical operator and 2 numbers from the
user and depending upon the operator entered by the user performs the operation on the
two numbers.*/
#include<iostream>
using namespace std;
class Calculator
{
	int a,b,choice;
	public :
	void set_data();
	void result();	
};
void Calculator ::set_data()
{
	cout << "\n\t\tWelcome to Calculator\n";
     cout << "Enter two numbers:";
     cin >> a >> b;
     cout << "\n1 ADDITION\n2 SUBTRACTION\n3 MULTIPLCATION\n4 DIVIDE\n5 REMAINDER\n6 EXIT\nENTER YOUR CHOICE :";
     cin >> choice;
}
void Calculator ::result()
{
	cout << "\nResult : ";
        switch (choice)
        {
        case 1:
            cout << (a + b);
            break;
        case 2:
            cout << (a - b);
            break;
        case 3:
            cout << (a * b);
            break;
        case 4:
            cout << (a / b);
            break;
        case 5:
            cout << (a % b);
            break;
        case 6:
            cout << "Thank you for using";
            exit(0);
            break;
        default:
            cout << "Enter valid choice";
        }
}
int main()
{
	Calculator a;
	a.set_data();
	a.result();
	return 0;
}
