#include<iostream>
using namespace std;
int main()
{
	float i,a=0.5;
	int n;
	cout<<"Enter n :";
	cin>>n;

	for(i=0.5;i<=n;i++)
	{

		cout<<" "<<a;
		a+=i;
	}	
}
