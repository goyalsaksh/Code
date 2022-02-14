#include <iostream>
using namespace std;
class Year
{
public:
    int y;
    void find_leapyear();
};
int main()
{
    Year y1;
    cout << "Enter year:";
    cin >> y1.y;
    y1.find_leapyear();
    return 0;
}
void Year ::find_leapyear()
{
    if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
    {
        cout << y << " is a leap year";
    }
    else
    {
        cout << y << " is not a leap year";
    }
}