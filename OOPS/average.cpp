//Q2: Write a C++ program to find the average of two numbers.
#include <iostream>
using namespace std;
class Avg
{
    int a, b;

public:
    void set_data()
    {
        cout << "Enter a and b :";
        cin >> a >> b;
    }
    void average()
    {
        cout << "Average of a and b :" << (a + b)/2 << endl;
    }
    
};
int main()
{
    Avg s;
    s.set_data();
    s.average();
    return 0;
}
