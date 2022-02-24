/*Q81- In a class there are 10 students. Each student is supposed to appear in 3 tests.
Write a program using two-dimensional arrays to print total marks and
average marks obtained by each student.*/
#include<iostream>
using namespace std;
class marks{
	int a[2][2],b[2][2],c[2][2],s[2][2],p[2][2];
	int i,j;
	public:
	void set_data();
	void display();
	void sum();
	void average();
};
void marks::set_data()
{
cout<<"marks in 1st test"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cin>>a[i][j];
		}
	}
cout<<"marks in 2nd test"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cin>>b[i][j];
		}
	}
cout<<"marks in 3rd test"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cin>>c[i][j];
		}
	}
}
void marks::display()
{
	cout<<"marks in 1st test"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<"\t"<<a[i][j];
		}
		cout<<endl;
	}
cout<<"marks in 2nd test"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<"\t"<<b[i][j];
		}
		cout<<endl;
	}
cout<<"marks in 3rd test"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<"\t"<<c[i][j];
		}
		cout<<endl;
	}
}
void marks::sum()
{
	cout<<"sum ="<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			s[i][j] = a[i][j]+b[i][j]+c[i][j];
		cout<<"\t"<<s[i][j];
		}
		cout<<endl;
	}
}
void marks::average(){
	cout<<"average is :"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			p[i][j] = (a[i][j]+b[i][j]+c[i][j])/2;
		cout<<"\t"<<p[i][j];
		}
		cout<<endl;
	}
}
int main()
{
	marks m[10];
	int i;
	for(i=1;i<=10;i++)
	{
	m[i].set_data();
	m[i].display();
	m[i].sum();
	m[i].average();
	}
	return 0;
}


