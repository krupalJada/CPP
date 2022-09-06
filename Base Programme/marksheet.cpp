// subject = a,b,c,d,e || t = total || p = persentage
#include<iostream>
using namespace std;
int main()
{
	float a,b,c,d,e,t,P;
	cout<<"Enter a marks of a :";
	cin>>a;

	cout<<"Enter a marks of b :";
	cin>>b;

	cout<<"Enter a marks of c :";
	cin>>c;

	cout<<"Enter a marks of d :";
	cin>>d;

	cout<<"Enter a marks of e :";
	cin>>e;

	t=a+b+c+d+e;
	cout<<"\n total of all sub : "<<t;

	P=(t*100/500);
	cout<<" \n percentage : "<<P;

	if(P>=75)
	{
		cout<<"\n Grade A ";
	}
	else if(P<75 && P>=60)
	{
		cout<<"\n Grade B ";
	}
	else if(P<60 && P>=45)
	{
		cout<<"\n Grade C ";
	}
	else if(P<45 && P>=35)
	{
		cout<<"\n Grade D ";
	}
	else
	{
		cout<<"\n Fail ";
	}
	return 0;
 }