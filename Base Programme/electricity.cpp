//b = consumption, a totalbill, c = extra charge,
#include<iostream>
using namespace std;
int main()
{
	float b,a,c,unit;
	cout<<"Enter a unit:";
	cin>>unit;


	if(unit<=100)
	{
		b=unit*0.60;
		a=(unit*0.60)+50;
		cout<<"fix charge = 50Rs.\n charge of unit comsuption : "<<b;
		cout<<"\ntotal amout of : "<<a;


	}
	else if(unit>100 && unit<=300)
	{       b=(unit-100)*0.80;
		a=(unit-100)*0.80+50+60;

		cout<<"\n first 100 unit charges = 60 Rs.";
		cout<<"\n fix charge = 50Rs.\n charge of unit comsuption after 100 unit : "<<b;
		cout<<"\n total amout of a: "<<a;
    }
	else if(unit>300)
	{
		b=(unit-300)*0.90;
		a=(unit-300)*0.90+50+60+160;
		cout<<"\n first 100 unit charges = 60 Rs.";
		cout<<"\n next 200 unit charges = 160 Rs.";
		cout<<"\n fix charge = 50Rs.\ncharge of unit comsuption after 300 unit: "<<b;
		cout<<"\n total amount of"<<a;
	}
	if (a>300)
	{
		c=(a*0.15);
		cout<<"\n amount of 15 per. charges : "<<c;
		cout<<"\n Total Bill with Surcharge: "<<c+a;
	}
}