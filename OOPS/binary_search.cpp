//Q46: Write a C++ program to accept “N” number of integer array from the user and search the number in the array using Binary Search.
#include <iostream>
using namespace std;
class Binary
{
	int n, a[20];
    int key;
    public:
    void set_data();
    void result();
};
void Binary ::set_data()
{
	cout << "Enter number of elements:";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Enter the element want to search:";
    cin >> key;
}
void Binary ::result()
{
	 int low =0;
	 int high =n-1;
	 int mid = low + (high-low)/2;
	 while(low<=high)
	 {
	 	if(key == a[mid])
	 	{
	 		cout<<"Element found at :"<<mid;
		 }
		 else if(key<a[mid])
		 {
		 	high = mid-1;
		 }
		 else
		 {
		 	low=mid+1;
		 }
	 }
}
int main()
{
	Binary l;
	l.set_data();
	l.result();
	return 0;
}
