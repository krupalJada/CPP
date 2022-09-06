// object as argument and object as return
#include<iostream>
using namespace std;
class Example{
    int a,b;
    public:
    void set_ab(int x,int y)
    {
        a=x;b=y;
    }
    void get_ab()    
    {
        cout<<"\n a : "<<a;
        cout<<"\n b : "<<b;
    }
    Example add(Example E1,Example E2)
    {
        Example E_temp;
        //    E_temp  a   b  
        E_temp.a = E1.a+E2.a;
        E_temp.b = E1.b+E2.b;
        return E_temp;
    }
};
int main()
{
    Example E1,E2,E3;
    E1.set_ab(10,20);
    //    E1  a   b  
    E2.set_ab(11,21);
    //    E2  a   b  
    E3 = E3.add(E1,E2);
    //    E2  a   b  
    E3.get_ab();

}
//      a   b
// E1   10  20
// E2   11  21
//tem   21  41
//E3    21  41


