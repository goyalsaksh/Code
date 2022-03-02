//Q15. C++ program to print max out of 3 input nos using conditional operator. Member func without argument and defined outside the class.
#include<iostream>
using namespace std;
class Maximum
{
	int a,b,c;
	public:
		void set_data();
		void print();
};
void Maximum ::set_data()
{
	cout<<"Enter value of a  ,b and c : ";
	cin>>a>>b>>c;
}
void Maximum ::print()
{
	int max;
	max = (a > b) ?
          (a > c ? a : c) :
          (b > c ? b : c);
	cout<<max;
}
int main()
{
	Maximum m;
	m.set_data();
	m.print();
	return 0;
}
