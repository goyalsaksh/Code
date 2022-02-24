//Q7. Write a C++ program to find the area and circumference of a circle of radius r.
#include <iostream>
#define pi 3.14
using namespace std;
class Circle
{
    int r;

public:
    void set_data()
    {
        cout << "Enter radius :";
        cin >> r;
    }
    void area()
    {
        cout << "Area of Circle :" << (pi*r*r) << endl;
    }
    void circumference()
    {
        cout << "Circumference of Circle :" <<(2*pi*r);
    }
};
int main()
{
    Circle c;
    c.set_data();
    c.area();
    c.circumference();
    return 0;
}
