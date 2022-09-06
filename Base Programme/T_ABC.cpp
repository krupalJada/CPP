#include<iostream>
int main()
{
	int i,j,a=65;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			std::cout<<" "<<(char)a;
            a++;
		}
		std::cout<<" \n";
	}
}