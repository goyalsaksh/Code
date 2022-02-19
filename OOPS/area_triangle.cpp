//Q6. Write a C++ program to find the area of a triangle using 3 sides.
#include <iostream>
#include<math.h>
using namespace std;
class Area
{
   int a,b,c,s;
   public:
   	void set_data();
   	void calculate();
};
void Area :: set_data()
{
	cout<<"Enter value of a,b,c and s :";
	cin>>a>>b>>c>>s;
}
void Area :: calculate()
{
	float a;
	a= sqrt(s*(sqrt(s-a))*(sqrt(s-b))*(sqrt(s-c)));
	cout<<"Area of triangle :"<<a;
}
int main()
{
  Area ar;
  ar.set_data();
  ar.calculate();
    return 0;
}
