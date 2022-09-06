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
class C 
{
    public:
    C(){cout<<"\n C Cons :"<<endl;}
    ~C(){cout<<"\n C Des :"<<endl;}
};
class D : public A,public B,public C
{
    public:
    D(){cout<<"\n D Cons :"<<endl;}
    ~D(){cout<<"\n D Des :"<<endl;}
};
int main()
{
    D krupal;
}