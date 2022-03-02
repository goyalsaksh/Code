#include <iostream>
#include <string.h>
using namespace std;
class STRING
{
public:
    string a, b;
    void substring(string b);
};
void STRING ::substring(string b)
{
    int pos;
    pos = b.find("Vidya");
    cout << "Vidya Found at position : " << pos << endl;
}
int main()
{
    STRING s1, s2, s;
    s1.a = "Banasthali";
    s2.b = "Vidyapith";
    s.substring(s2.b);
}