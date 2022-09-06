#include<iostream>
using namespace std;
class A
{
    public:
    A(){cout<<"\n A Cons :"<<endl;}
    ~A(){cout<<"\n A Des :"<<endl;}
};
class B :public A
{
    public:
    B(){cout<<"\n B Cons :"<<endl;}
    ~B(){cout<<"\n B Des :"<<endl;}
    
};
class C : public A
{
    public:
    C(){cout<<"\n C Cons :"<<endl;}
    ~C(){cout<<"\n C Des :"<<endl;}
};
class D :public C,public B
{
    public:
    D(){cout<<"\n D Cons :"<<endl;}
    ~D(){cout<<"\n D Des :"<<endl;}
};
int main()
{
    D krupal;
}