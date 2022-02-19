//Q24: Write a C++ program to print the addition of first “n” number.
#include<iostream>
using namespace std;
class Add
{
	int n;
	public :
	void set_data();
	void result();	
};
void Add ::set_data()
{
	cout <<"Enter n :";
	cin>>n;
}
void Add ::result()
{
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum +=i;
	}
	cout<<"Addition of n numbers: "<<sum;
}
int main()
{
	Add a;
	a.set_data();
	a.result();
	return 0;
}
