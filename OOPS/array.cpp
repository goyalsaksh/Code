/*Q44:Write a C++ program to accept “N” elements of array elements from the user and
perform following operations. 1)Insert new element to the array. 2) Delete existing element
from the array.*/
#include <iostream>
using namespace std;
class Array
{
private:
int n;
public:
int arr[10];
void DisplayArray();
void InsertValues();
void CreateArray();
void DeleteValues();

};
void Array::CreateArray()
{
cout<<"\nEnter the number of Values to be entered : ";
cin>>n;
cout<<"\nEnter the Values : "<<endl;
for(int i=0;i<n;i++)
{
cin>>arr[i];
}

}
void Array::InsertValues()
{
int i,x, position, value;
x=n;
x++;
cout<<"\nEnter the position on which element is to be inserted: ";
cin>>position;
cout<<"\nEnter the value : ";
cin>>value;
for(i=x;i>=position;i--)
{
arr[i]=arr[i-1];
}
arr[position-1]=value;
cout<<"\nArray Values Inserted! "<<endl;
cout<<"\nArray is :";

for(i=0;i<x;i++)
{
cout<<"\t"<<arr[i];
}
}
void Array::DeleteValues()
{
int t = n;
int i, j, y, value;
cout<<"\nEnter the Value To Be Deleted :";
cin>>value;
for (i=0;i<t;i++)
{
if(arr[i]==value)
{
break;
}
}
if(i<t)
{
for(j=i;j<t;j++)
{
arr[j]=arr[j+1];
}
}
cout<<"\nArray After Deleting Values :"<<endl;
if(y>n)
{
for (i=0;i<t;i++)
{
cout<<"\t"<<arr[i];
}
}
else if (y==n)
{
for (i=0;i<(t-1);i++)
{
cout<<"\t"<<arr[i];
}
}
}
void Array::DisplayArray()
{
cout<<"\nArray is :\n";
for (int i=0;i<n;i++)
{
cout<<"\t"<<arr[i];
}

}
int main()
{
Array a;
int option;
a.CreateArray();
do
{
cout<<"\nEnter 1 to Insert Values\nEnter 2 to Display Values\nEnter 3 to Delete Values\nEnter 4to EXIT\n\nEnter Option: -> ";
cin>>option;
switch(option)
{
case 1:
a.InsertValues();
break;
case 2:
a.DisplayArray();
break;
case 3:
a.DeleteValues();
break;
case 4:
break;
default:
cout<<"Invalid choice!"<<endl;
}
}while(option!=4);
return 0;
}
