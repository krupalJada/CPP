#include<iostream>
using namespace std;
class findage
{
    int age;
    public:
    findage(int n)//constructor
    {
        age=n;
        cout<<"\n Age : "<<age;
    }  
    findage(findage &new_age)//copy constructor
    {
        age=new_age.age;
        cout<<"\n Age : "<<age;
    }  
};
int main()
{
    findage person1(20);
    findage person2(person1);
    return 0;
}
