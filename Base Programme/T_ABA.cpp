#include<iostream>
int main()
{
	int i,j;
	for(i=65;i<=69;i++)
	{
		for(j=i;j>=65;j--)
		{
			std::cout<<" "<<(char)j;

		}
		std::cout<<" \n";
	}
}