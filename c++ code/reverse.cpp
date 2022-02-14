#include <iostream>
using namespace std;
int main()
{
    int rev = 0;
    int temp, num;
    cout << "Enter number:";
    cin >> num;
    while (num != 0)
    {
        temp = num % 10;
        rev = temp + (10 * rev);
        num = num / 10;
    }
    cout << "Result:" << rev;
}