#include<iostream>
using namespace std;
int sum()
{
    float a,b;
    cout<<"Enter A :";
    cin>>a;
    cout<<"Enter B :";
    cin>>b;
    return a + b;
}
int main()
{
    float total;
    total  = sum();
    cout<<"total :"<<total;
    return 0;
}