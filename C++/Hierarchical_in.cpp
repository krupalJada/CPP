#include <iostream>
using namespace std;


//Base Class
class Bank
{
    protected:
    int  dep_amt,with_amt;                    
    void deposit();
    void withdraw();
};
    void Bank::deposit()
        {
            cout<<"\n Deposite Amount :";
            cin>>dep_amt;
        }
    void Bank::withdraw()
        {       
           cout<<"\n Withdrawal Amount:";
           cin>> with_amt;
        } 


//Derived Class
class Saving_Ac : public Bank
{
    public:
    int Saving_Ac_no;
    int Saving_balance;
    Saving_Ac(int);
    void S_deposit();
    void S_withdraw();
    void S_set_no(int);
    void S_showBalance();    
};
    Saving_Ac::Saving_Ac(int S_bal)
    {
        Saving_balance = S_bal;
    }
    void Saving_Ac::S_set_no(int S_Ac_num)
    {
        Saving_Ac_no = S_Ac_num;
        cout<<"\n Your Ac Number  :"<<Saving_Ac_no;
    }    
    void Saving_Ac::S_deposit()
        {
            cout<<"\n Deposite Amount :";
            cin>>dep_amt;
            Saving_balance += dep_amt;
        }
    void Saving_Ac::S_withdraw()
        {       
           cout<<"\n Withdrawal Amount:";
           cin>>with_amt;
           if(with_amt > Saving_balance)
           {
                cout<<"\n You not have a sufficient balance";
           }
           Saving_balance -= with_amt;
        }
    void Saving_Ac::S_showBalance()
    {
        cout<<"\n Saving A/C Balance:"<<Saving_balance;
    } 
    

//Derived Class
class Current_Ac : public Bank
{
    public:
    int Current_Ac_no;
    int Current_balance;
    Current_Ac(int);
    void C_set_no(int);     
    void C_deposit();
    void C_withdraw();
    void C_showBalance(); 
};
    Current_Ac::Current_Ac(int C_bal)
    {
        Current_balance = C_bal;
    }
    void Current_Ac::C_set_no(int C_Ac_num)
    {
        Current_Ac_no = C_Ac_num;
        cout<<"\n Your Ac Number  :"<<Current_Ac_no;
    }    
    void Current_Ac::C_deposit()
        {
            cout<<"\n Deposite Amount :";
            cin>>dep_amt;
            Current_balance += dep_amt;
        }
    void Current_Ac::C_withdraw()
        {       
           cout<<"\n Withdrawal Amount:";
           cin>>with_amt;
           if(with_amt > Current_balance)
           {
                cout<<"\n You not have a sufficient balance";
           }
           Current_balance -= with_amt;
        } 
    void Current_Ac::C_showBalance()
    {
        cout<<"\n Current A/C Balance:"<<Current_balance;
    }    
      


int main()
{
    int ac,n,trans;     
    Saving_Ac pallavi(1000);
    Current_Ac krupal(1000);
    string name,Mo;        
        cout << "\nPlease Enter Your Name :";
        getline(cin, name);
        cout << "\nEnter Your Contact No :";
        getline(cin, Mo);
        int length = Mo.size();
        if (length != 10)
        {
            cout << "\nPlease Enter Valid Contact:";
            cout << "\nEnter Your Contact No :";
            getline(cin, Mo);
        }
        cout<<"\n "<<name<<" !Welcome In JK Pvt.limited Bank....";
            cout<<"\n Select your bank Ac Type:";
            cout<<"\n";
            cout<<"\n Press 1 for Saving Ac";
            cout<<"\n Press 2 for Current Ac";            
            cout<<"\n Press 0 for Exit";
            cout<<"\n Enter The A/C Type :";
            cin >>ac;
            if(ac==1){
                cout<<"\n Here is Your Details";
                cout<<"\n Custmer Name    :"<<name;
                cout<<"\n Custmer Contact :"<<Mo;
                pallavi.S_set_no(1234);
                cout<<"\n";                 
            }else{
                cout<<"\n Here is Your Details";
                cout<<"\n Custmer Name    :"<<name;
                cout<<"\n Custmer Contact :"<<Mo;
                pallavi.S_set_no(1234);
                cout<<"\n";
            }            
        do{
            cout<<"\n choose your transaction :";
            cout<<"\n Press 1 for Deposite:";
            cout<<"\n Press 2 for Withdraw:";
            cout<<"\n Press 3 for change Ac type:";
            cout<<"\n Press 0 for Show Balance:";
            cout << "\n Enter switch :";
            cin >> n;
            switch (n)
            {
            case 1:
                if(ac == 1){                    
                    pallavi.S_deposit();
                    break;
                }else{
                    krupal.C_deposit();
                    break;
                }                
            case 2:
                if(ac == 1){                    
                    pallavi.S_withdraw();
                    break;
                }else{                   
                    krupal.C_withdraw();
                    break;
                }
            case 3:
                if(ac == 1)
                {
                    pallavi.S_showBalance();                                  
                    ac = 2;
                    break;
                }else{
                    krupal.C_showBalance();
                    ac = 1;
                    break; 
                }                      
            case 0:
                if(ac == 1){
                    pallavi.S_showBalance();              
                    break;
                }else{
                    krupal.C_showBalance();                
                    break;
                }
            default:
                cout << "\n please call the function";
                break;
            }
        }while (n != 0);           
       
}
