#include <iostream>
using namespace std;
int main()
{
    int a, b;
    int choice;
    while (1)
    {
        cout << "\n\t\tWelcome to Calculator\n";
        cout << "Enter two numbers:";
        cin >> a >> b;
        cout << "\n1 ADDITION\n2 SUBTRACTION\n3 MULTIPLCATION\n4 DIVIDE\n5 REMAINDER\n6 EXIT\nENTER YOUR CHOICE :";
        cin >> choice;
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
        return 0;
    }
}