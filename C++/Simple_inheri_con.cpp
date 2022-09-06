#include<iostream>
using namespace std;
class A
{
    public:
    A(){cout<<"\n A Cons :"<<endl;}
    ~A(){cout<<"\n A Des :"<<endl;}
};
class B : public A
{
    public:
    B(){cout<<"\n B Cons :"<<endl;}
    ~B(){cout<<"\n B Des :"<<endl;}
    
};
int main()
{
    B krupal;
    cout<<"hello";
}