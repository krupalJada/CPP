// C++ program to demonstrate getline() function

#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	cout << "Please enter your name: \n";
//	cin>>str;
//	cout<<"\n str : "<<str;
	getline(cin, str);

	cout << "Hello, " << str
		<< " welcome to skill Qode!\n";
		
	return 0;
}
