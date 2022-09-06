#include <iostream>
using namespace std;
class arithmatic
{
    int add,sub,mul,div;
    public:                                                        
    void setTyre(int a,int b)  
    {
        add = a + b;
        sub = a - b;
        mul = a * b;
        div = a / b;
    }
    int getTyre()          
    {
        return div;
    }
};
int main()
{
    arithmatic typeofarthmatic;
    typeofarthmatic.setTyre(20,10);
    cout<<typeofarthmatic.getTyre();
}