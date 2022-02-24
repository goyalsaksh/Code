#include <iostream>
using namespace std;
int main()
{
    int num, temp = 0;
    int p = 0;
    int n = num;
    cout << "enter number:";
    cin >> num;
    while (num != 0)
    {
        temp = num % 10;
        p = temp + (10 * p);
        num = num / 10;
    }
    cout << p << endl;
    if (n == p)
    {
        cout << p << " is pallindrome";
    }
    else
    {
        cout << p << " is not pallindrome";
    }
}