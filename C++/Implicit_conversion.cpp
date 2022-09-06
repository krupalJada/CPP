// An example of implicit conversion

#include <iostream>
using namespace std;

int main()
{
	int x = 10; // integer x
	char y = 'a'; // character c
	
	y = x + y;	
	x = x + y;
	
	float z = x + 1.9;

	cout << "x = " << x << endl;
	cout<< "y = " << y << endl;
	cout<< "z = " << z << endl;

	return 0;
}
/*
// C++ program to illustrate return by reference
#include <iostream>
using namespace std;
int& returnValue(int& x)
{
	cout << "x = " << x
		<< " The address of x is "
		<< &x << endl;	
	return x;
}
int main()
{
	int a = 20;
	int& b = returnValue(a);
	cout << "a = " << a
		<< " The address of a is "
		<< &a << endl;	
	cout << "b = " << b
		<< " The address of b is "
		<< &b << endl;		
	return 0;
}*/
