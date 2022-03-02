#include <iostream>
#include <string.h>
using namespace std;
class STRING
{
public:
    string a, b;
    void compare(string a,string b);
};
void STRING ::compare(string a,string b)
{
    int x;
    x=a.compare(b);
    if(x==0)
    cout<<" Srings are equal";
    else
    cout<<"Strings are not equal";
}
int main()
{
    STRING s1, s2, s;
    s1.a = "Banasthali";
    s2.b = "Vidyapith";
    s.compare(s1.a,s2.b);
}