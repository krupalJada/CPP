
#include <iostream>
int main()
{
    int i, j;
    for(i=1;i<=5;i++)
	{
		for(j=i;j>=1;j--)
		{
            std::cout << " " << j;
        }
        std::cout << " \n";
    }
}