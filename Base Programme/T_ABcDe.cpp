#include<iostream>
int main()
{
	char i,j,a=65;
	for(i=65;i<=69;i++)
	{
		for(j=65;j<=i;j++)
		{
            
			if(j%2==0)
			std::cout<<" "<<(char)a;
			else
			std::cout<<" "<<(char)(a+32);
            a++;
			
		}
		printf(" \n");

	}
}