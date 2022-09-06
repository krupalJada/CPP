#include <iostream>
using namespace std;
class Base
{
private:
    int pvt = 1;
protected:
    int prot = 2;
public:
    int pub = 3;
    int getPVT()
    {
        return pvt;
    }
};
class PublicDerived : protected Base
{
public:
    int getProt()
    {
        return prot;
    }
    int getPublic()
    {
        return pub;
    }
};
int main()
{
    PublicDerived object1;

//    cout << "Private = " << object1.getPVT() << endl;
    cout << "Protected = " << object1.getProt() << endl;
    cout << "Public = " << object1.getPublic() << endl;
//    cout << "Public = " << object1.pub << endl;
    return 0;
}