#include<iostream>
int main()
{
	int i,j,a=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			std::cout<<" "<<a;
            a++;
		}
		std::cout<<" \n";
	}
}