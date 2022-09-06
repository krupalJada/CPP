#include<iostream>
int main()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=5;j>=i;j--)
		{
			std::cout<<" "<<i;
		}
		std::cout<<" \n";
	}
}