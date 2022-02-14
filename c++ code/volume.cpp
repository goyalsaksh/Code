#include <iostream>
#include <stdlib.h>
#include <math.h>
#define pi 3.14
using namespace std;
class Volume
{
public:
    int s;
    int l, b, h;
    int r;
    void vol(int s);
    void vol(int l, int b, int h);
    void vol(int r, int h);
};
void Volume ::vol(int s)
{
    int v;
    v = pow(s, 3);
    cout << "Volume of Cube:" << v;
}
void Volume ::vol(int r, int h)
{
    float v;
    v = pi * r * r * h;
    cout << "Volume of Cylinder:" << v;
}
void Volume ::vol(int l, int b, int h)
{
    int v;
    v = l * b * h;
    cout << "Volume of Rectangular box:" << v;
}
int main()

{
    Volume v;
    int choice;
    while (1)
    {
        cout << "\nFind Volume\n1.Volume of Cube\n2.Volume of rectangular box\n3.Volume of Cylinder\n4.Exit\nEnter your choice:";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter side  of Cube:";
            cin >> v.s;
            v.vol(v.s);
            break;
        case 2:
            cout << "Enter length,breadth and height of Rectangular box:";
            cin >> v.l >> v.b >> v.h;
            v.vol(v.l, v.b, v.h);
            break;
        case 3:
            cout << "Enter radius and height of Cylinder:";
            cin >> v.r >> v.h;
            v.vol(v.r, v.h);
            break;
        case 4:
            exit(0);
        default:
            cout << "Please enter valid choice";
        }
    }
}