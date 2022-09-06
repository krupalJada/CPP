#include <iostream>
using namespace std;
int main()
{
	int n,binaryNum[32];
    cout<<"enter no :";
    cin>>n;
 
	int i = 0;
	while (n > 0) {

		// storing remainder in binary array
		binaryNum[i] = n % 2;
		n = n / 2;
		i++;
	}
    
	// printing binary array in reverse order
	for (int j = i - 1; j >= 0; j--)
		cout << binaryNum[j];
}



