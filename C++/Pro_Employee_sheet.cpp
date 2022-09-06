#include<iostream>
using namespace std;
class employee
{
    string name,id,city;
    string post[10]={"","MANAGER","DEVELOPER","HUMAN RESOURCES","SUPERWISER"};
    int whour,n;
    long long mnum,salary;
    public:
        employee();
        void process();
        void show();
        void all();
        void ex();
};
employee::employee()
    {
        cout<<"\n Enter Employee name : ";
        getline(cin, name);
        
        cout<<"\n Enter Employee id : ";
        getline(cin, id);
        
        cout<<"\n Enter Employee City : ";
        getline(cin, city);
        
        cout<<"\n Enter Employee Mobile number : +91 ";
        cin>>mnum;
        
        cout<<"\n POST 1 FOR MANAGER ";
        cout<<"\n POST 2 FOR DEVELOPER ";
        cout<<"\n POST 3 FOR HUMAN RESOURCES ";
        cout<<"\n POST 4 FOR SUPERWISER ";
        
        cout<<"\n\n\n ENTER YOUR CHOICE = ";
        cin>>n;
        
        cout<<"\n Enter Employee Working Hour : ";
        cin>>whour;
        
    }
void employee::process()
    {
        int a,b,e;
        switch(n)
        {
         case 1:
        if(whour>40)
        {
            a=whour-40;
            b=(a)*(300*1.5);
            e=40*300;
            salary=e+b;
        }
        else
        {
           salary=whour*300; 
        }
        break;
         case 2:
        if(whour>40)
        {
            a=whour-40;
            b=(a)*(200*1.5);
            e=40*200;
            salary=e+b;
        }
        else
        {
           salary=whour*200; 
        }
        break;
        case 3:
        if(whour>40)
        {
            a=whour-40;
            b=(a)*(600*1.5);
            e=40*600;
            salary=e+b;
        }
        else
        {
           salary=whour*600; 
        }
        break;
        case 4:
        if(whour>40)
        {
            a=whour-40;
            b=(a)*(700*1.5);
            e=40*700;
            salary=e+b;
        }
        else
        {
           salary=whour*700; 
        }
        break;
        default:
        break;
        }
    }
void employee::show()
    {
        cout<<"\n\t===========================================================================";
        cout<<"\n\t                          EMPLOYEE DETAILS                                 ";
        cout<<"\n\t===========================================================================";
        cout<<"\n\t                          NAME          : "<<name;
        cout<<"\n\t                          ID            : "<<id;
        cout<<"\n\t                          CITY          : "<<city;
        cout<<"\n\t                          POST          : "<<post[n];
        cout<<"\n\t                          MOBILE NUMBER : +91 "<<mnum;
        cout<<"\n\t                          WORKING HOURS : "<<whour;
        cout<<"\n\t                          SALARY        : "<<salary;
        cout<<"\n\t===========================================================================";
    }
void employee::ex()
{
          int k;
          cout<<"\n\n\n\t===========================================================================";
          cout<<"\n\t                          PRESS 1 FOR GET REPORT                           ";
          cout<<"\n\t---------------------------------------------------------------------------";
          cout<<"\n\t                          PRESS 2 FOR GO BACK                              ";
          cout<<"\n\t===========================================================================";
          cout<<"\n\n\n ENTER YOUR CHOICE = ";
          cin>>k;
          if(k==1)
          {
          show();
          cout<<"\n\t                             THANK YOU                                     ";
          cout<<"\n\t===========================================================================";
          }
          else
          {
          cout<<"\n\t===========================================================================";
          cout<<"\n\t                             THANK YOU                                     ";
          cout<<"\n\t===========================================================================";
          }
}
void employee::all()
     {
          process();
          ex();
     }
          

int main()
{
    
    employee e1;
    e1.all();
    
}