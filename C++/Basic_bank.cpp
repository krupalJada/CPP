#include<iostream>
using namespace std;
class Bank 
{
    int accno,balance;
    string myname;    
    public:
    static int count;
    Bank(int accno,int balance,string myname)        
    {
        this->accno = accno;
        this->balance = balance;
        this->myname = myname;   
        count++;
    }    
    void getData()
    {
        cout<<"\n"<<myname<<" - "<<accno<< " - " <<balance;
    }    
};
 int Bank::count;
int main()
{
    Bank a(101,1500,"Aryan"),m(102,170,"Meet");
    a.getData();
    m.getData();
    cout<<" \n No. of Accounts : "<<Bank::count;
    return 0;
}
// static variable must be declare gloabally
// static variable initial value is 0
// static variable cannot be private

