#include<iostream>
using namespace std;
class A
{
    public:
    A(){cout<<"\n A Cons :"<<endl;}
    ~A(){cout<<"\n A Des :"<<endl;}
};
class B
{
    public:
    B(){cout<<"\n B Cons :"<<endl;}
    ~B(){cout<<"\n B Des :"<<endl;}
    
};
class C :public A,public B
{
    public:
    C(){cout<<"\n C Cons :"<<endl;}
    ~C(){cout<<"\n C Des :"<<endl;}
};
int main()
{
    C krupal;
}