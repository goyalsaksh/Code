//Q28: Write a C++ program to accept one number from the user and check whether the given number is Armstrong number or not
#include <iostream>
 using namespace std;
 class Armstrong
 {
 	int num;
 	public:
 	void set_data();
 	void calculate();
 };
void Armstrong :: set_data()
{
	cout << "Enter a number: ";
 	cin >> num; 
}
void Armstrong :: calculate()
{
	int originalNum, remainder, result = 0;
	originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;
        originalNum /= 10;
    }

    if (result == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

} 
 
 int main() 
{
	Armstrong a;
	a.set_data();
	a.calculate();
 	return 0;
 }

