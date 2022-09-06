#include <iostream>
using namespace std;
class Car
{
    int Tyre;
    public:                             //int car :: tyre is private within this context
    //public:
    //private:                          //access specifier  //byb defult all dm,nf private

    void setTyre(int n)    //setter
    {
        Tyre = n;
    }
    int getTyre()           //getter
    {
        return Tyre;
    }
};
int main()
{
    Car mersedes;
    mersedes.setTyre(4);
    cout<<mersedes.getTyre();
}