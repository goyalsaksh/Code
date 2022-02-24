/*Q69- Develop a C++ program to accept Employee details as Employee_Id, Employee_Name,
Designation and Salary from the user and print the same.
Q70- Develop a C++ program to accept Student details as RollNumber, Name and Fee from
the user and print the same.*/
#include <iostream>
#include <stdlib.h>
using namespace std;
class Student
{
    int rollno;
    char name[30];
    int fee;

public:
    void set_data();
    void display();
};
void Student ::set_data()
{
    cout << "Enter roll nuber:";
    cin >> rollno;
    cout << "Enter name : ";
    fflush(stdin);
    cin.getline(name, 30);
    cout << "Enter fee : ";
    cin >> fee;
}
void Student ::display()
{
    cout << rollno << "\t" << name << "\t" << fee << endl;
}
int main()
{
    int n;
    Student s[300];
    cout << "Enter number of students : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        s[i].set_data();
    }
    cout << endl
         << "Rollnumber\tName\tFees" << endl;
    for (int i = 0; i < n; i++)
    {
        s[i].display();
    }
}