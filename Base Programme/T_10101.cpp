#include<stdio.h>
#include<conio.h>
int main()
{

	int i,j,a=1;

	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(a%2==1)
			printf(" %d ",1);
			else
			printf(" %d ",0);
			a++;
		}
		printf(" \n");
	}
}