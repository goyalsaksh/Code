#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
class Student
{
    int rollno;
    char name[20];
    char depart[20];
    char course[20];
    int yoj;

public:
    void set_data();
    void put_data(int year);
};
void Student ::set_data()
{
    cout << "\nEnter Roll Number :";
    cin >> rollno;
    cout << "\nEnter name :";
    fflush(stdin);
    cin.getline(name, 20);
    cout << "\nEnter Department name :";
    fflush(stdin);
    cin.getline(depart, 20);
    cout << "\nEnter Course :";
    fflush(stdin);
    cin.getline(course, 20);
    cout << "\nEnter year of joining :";
    cin >> yoj;
}
void Student ::put_data(int year)
{

    if (yoj == year)
    {
        cout << "\n"
             << rollno << "\t" << name << "\t" << depart << "\t\t" << course;
    }
}

int main()
{
    Student st[300];
    int n, i;
    cout << "Enter number of Employees :";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        st[i].set_data();
    }
    int year;
    cout << "\nEnter year of joining to print details:";
    cin >> year;
    cout << "\nEmployee details :";
    cout << "\nRoll no"
         << "\tName"
         << "\tDepartment"
         << "\tCourse";
    for (i = 0; i < n; i++)
    {
        st[i].put_data(year);
    }
    return 0;
}