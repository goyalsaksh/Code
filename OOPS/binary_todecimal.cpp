//Q30: Write a C++ program to accept one number from the userand convert decimal to binary and binary to decimal.
#include<iostream>
using namespace std;
class conversion
{
	int rem,d,num;
	public:
		int dec_to_binary();
		int binary_to_dec();
};
int conversion::dec_to_binary()
{
	cout<<"ENTER DECIMAL NUMBER = ";
	cin>>d;
    long binary=0,i=1;
    while(d!=0) 
	{
        rem=d%2;
        d=d/2;
        binary=binary+(rem*i);
        i=i*10;
    }
    return binary;
}
int conversion::binary_to_dec()
{
	
    int dec=0,b=1;;
	cout<< "Enter the binary number : ";
    cin>>num;
	int dec_value = 0;
    int base = 1;
    int temp = num;
    while (temp)
	{
        int last_digit = temp % 10;
        temp = temp / 10;
        dec_value += last_digit * base;
        base = base * 2;
    }
    return dec_value;
}
main()
{
	conversion ob;
	int n,decimal,bin;
	
	cout<<"1. CONVERT DECIMAL TO BINARY "<<endl;
	cout<<"2. CONVERT BINARY TO DECIMAL "<<endl;
	cout<<"3. EXIT"<<endl;
	do
	{
		cout<<"ENTER YOUR CHOICE : ";
		cin>>n;
		switch(n)
		{
			case 1:
				decimal = ob.dec_to_binary();
				cout<<"BINARY NUMBER OF GIVEN DECIMAL NUMBER IS : "<<decimal<<endl;
				break;
			case 2:
				bin=ob.binary_to_dec();
				cout<<"DECIMAL NUMBER OF GIVEN BINARY NUMBER IS : "<<bin<<endl;
				break;
			default:
				cout<<"END OF PROGRAM!";	
		}
		
	}while(n!=3);
	return 0;
}

