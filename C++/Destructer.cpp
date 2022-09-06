#include<iostream>
using namespace std;
class Con{
    int n;
    public:
    Con(int n)//parameterized constructor
    {
        this->n=n;
        cout<<"\n Constructor called : "<<n;
    }
    ~Con()//Destructor ~ tield sign
    {     
        cout<<"\n Destructor called : "<<n;
    }
};
int main()
{
    Con c1(1),c2(2),c3(3);
}