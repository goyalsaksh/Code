#include <iostream>

#include <string.h>
#include <ctime>
#include <stdlib.h>
using namespace std;
class Employee
{
    int empno;
    char name[20];
    char depart[20];
    char designation[20];
    time_t join_date;

public:
    int salary;
    void set_data();
    void put_data(int n);
    // void set_sal(int salary,int n);
};
void Employee ::set_data()
{
    cout << "\nEnter Employee Number :";
    cin >> empno;
    cout << "\nEnter name :";
    fflush(stdin);
    cin.getline(name, 20);
    cout << "\nEnter Department name :";
    fflush(stdin);
    cin.getline(depart, 20);
    cout << "\nEnter Designation :";
    fflush(stdin);
    cin.getline(designation, 20);
    cout << "\nEnter date of joining :";
    cin >> join_date;
    cout << "\nEnter salary:";
    cin >> salary;
}
/*void Employee :: set_sal(int salary,int n)
{


}*/
void Employee ::put_data(int n)
{

    cout << "\n"
         << empno << "\t" << name << "\t" << depart << "\t\t" << designation << "\t" << salary;
}

int main()
{
    Employee emp[300];
    int n, i;
    cout << "Enter number of Employees :";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        emp[i].set_data();
    }
    cout << "\nEmployee details :";
    cout << "\nRoll no"
         << "\tName"
         << "\tDepartment"
         << "\tCourse";

    int k, j;

    for (k = 0; k < n; k++)
    {
        for (j = k + 1; j < n; j++)
        {
            if (emp[k].salary < emp[j].salary)
            {
                int temp;
                temp = emp[k].salary;
                emp[k].salary = emp[j].salary;
                emp[j].salary = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        emp[i].put_data(n);
    }
    return 0;
}