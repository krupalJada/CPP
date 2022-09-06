// calculate simple intrest

#include<iostream>
using namespace std;
void sum(int i,float j)
{
    cout<<"\n intrest :"<<i*(j)/100;
}
int main()
{
    int a,b;
    cout<<"Enter amount :";
    cin>>a;
    cout<<"Enter intrest rate :";
    cin>>b;
    sum(a,b);
    return 0;   
}