#include<iostream>
using namespace std;
int main()
{
	int a[5][5],i,j,sum1=0,sum2=0,sum3=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"a["<<i<<"]["<<j<<"] :";
			cin>>a[i][j];
		}
	}
    cout<<"\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"\t"<<a[i][j];			
		}		
		cout<<"\n ";
	}	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{	
			if(i<j)
			{
				sum1=sum1+a[i][j];
			}
			else if(i>j)
			{
				sum2=sum2+a[i][j];
			}
			else 
			{
				sum3=sum3+a[i][j];
			}			
		}		
		
	}
		cout<<"\n total of upper triangle : "<<sum1;
		cout<<"\n total of lower triangle : "<<sum2;
		cout<<"\n total of cross line : "<<sum3;
		
	return 0;

}