#include<iostream>
using namespace std;
class statCount
{
    static int st_Count;
    public:
    void Set_Count(int n)
    {
        st_Count = n;
    }
    void Counter()
    {
        st_Count++;
    }
    void Get_Count()
    {
        cout<<"\n"<<st_Count;
    }
};
int statCount :: st_Count=0;
int main()
{
    statCount obj1,obj2,obj3;
    obj1.Set_Count(100);
    obj1.Get_Count();
    obj2.Counter();
    obj2.Counter();
    obj2.Counter();
    obj2.Counter();
    obj2.Counter();
    obj3.Get_Count();
    obj2.Set_Count(1000);
    obj2.Counter();
    obj3.Get_Count();
}