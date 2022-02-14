#include <iostream>
using namespace std;
int main()
{
    int n, a[20];
    int key;
    cout << "Enter number of elements:";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Enter the element want to search:";
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        if (key == a[i])
        {
            cout << "Element found at position " << i + 1;
            break;
        }
    }

    return 0;
}