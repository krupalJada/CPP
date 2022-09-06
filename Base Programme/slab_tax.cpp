// s = slabincome, t = tax , to = total of income wcout<<
#include<iostream>
using namespace std;
int main ()
{
	float s,t,to;
	cout<<"Enter a income of slab :";
	cin>>s;

	if(s<=2500)
	{
		t=(s*0);
		to=(s+t);
		cout<<"\n slab 1 income : "<<s;
		cout<<"\n tax of slab 1(0 per.)  "<<t;
		cout<<"\n total income with tax : "<<to;
	}
	else if(s>2500 && s<=5000)
	{
		t=(s-2500)*0.10;
		to=(s+t);
		cout<<"\n slab 2 income "<<s;
		cout<<"\n tax of remainig income slab 2(10 per.) : "<<t;
		cout<<"\n total income with tax : "<<to;
	}
	else if(s>5000 && s<=10000)
	{
		t=(s-5000)*0.20+250;
		to=(s+t);
		cout<<"\n slab 3 income : "<<s;
		cout<<"\n tax of remainig income  slab 3(20 per.) : "<<t;
		cout<<"\n total income with tax : "<<to;
	}
	else
	{
		t=(s-10000)*0.30+250+1000;
		to=(s+t);
		cout<<"\n slab 4 income : "<<s;
		cout<<"\n tax of remaining income slab 4(30 per.) : "<<t;
		cout<<"\n total income with tax : "<<to;
	}
}