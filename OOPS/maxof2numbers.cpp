//Q13. C++ program to print max no out of two input nos using conditional operator. Member func without argument and defined outside the class
#include<iostream>
using namespace std;
class Maximum
{
	int a,b;
	public:
		void set_data();
		void print();
};
void Maximum ::set_data()
{
	cout<<"Enter value of a and b : ";
	cin>>a>>b;
}
void Maximum ::print()
{
	int max;
	max = (a > b) ? a : b;
	cout<<max;
}
int main()
{
	Maximum m;
	m.set_data();
	m.print();
	return 0;
}
