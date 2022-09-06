#include<iostream>
using namespace std;
class FoodOrder 
{
    float Dhosa_amt=0,TotalAmt=0,Discount=0,GST=0;
    string item[10] = {" ","Dhosa","masaladhosa"};
public:    
    FoodOrder(float);
    ~FoodOrder();
    void Dhosa(float);
    void MasalaDhosa(float);
    void MaisurDhosa(float);
    void JiniRoll(float);
    void SweetCorn(float);
       
};
    FoodOrder::FoodOrder(float a)
    {
        cout<<"\t\t\t\t\t----------JK RESTAURENT----------";
        cout<<"\n\t\t\t\t\t----WELCOME TO OUR RESTAURENT----";
        cout<<"\n\t\t\t\t\t---------------------------------";
        cout<<"\n\t\t\t\t\tNO.  Items                Price";
        cout<<"\n\t\t\t\t\t1.   Dhosa(simple)        80.00";
        cout<<"\n\t\t\t\t\t2.   Masala Dhosa         100.00";
        cout<<"\n\t\t\t\t\t3.   Maisur Dhosa         130.00";
        cout<<"\n\t\t\t\t\t4.   Jini Roll            150.00";
        cout<<"\n\t\t\t\t\t5.   Sweet Corn           150.00";
        cout<<"\n\t\t\t\t\t---------------------------------";
        cout<<"\n\t\t\t\t\t Enter 0 for confirm your Order-----";

    }
    FoodOrder::~FoodOrder()
    {
        if(TotalAmt>5000 && TotalAmt<=7000){
            Discount = TotalAmt * 0.10;
            TotalAmt -= Discount;
        }
        else if(TotalAmt>7000 && TotalAmt<=10000)
        {
            Discount = TotalAmt * 0.20;
            TotalAmt -= Discount;
        }
        else if(TotalAmt>10000)
        {
            Discount = TotalAmt * 0.30;
            TotalAmt -= Discount;
        }
        float GST = TotalAmt * 0.05;
        TotalAmt += GST;
        cout<<"\n\t\t\t\t\t----------JK RESTAURENT----------";
        cout<<"\n\t\t\t\t\t-----------Order Bill------------";
        cout<<"\n\t\t\t\t\t---------------------------------";
        cout<<"\n\n\t\t\t\t\t=> Total Discount :"<<Discount;
        cout<<"\n\n\t\t\t\t\t=> GST(2.5 CGST,2.5 CGST) :"<<GST;
        cout<<"\n\n\t\t\t\t\t=> Total Payable Bill :"<<TotalAmt;
        cout<<"\n\n\t\t\t\t\t---------------------------------";
        cout<<"\n\t\t\t\t\t-------Thank You For Order-------";

    }
    void FoodOrder::Dhosa(float Dhosa_qty)
    {   
        Dhosa_amt = Dhosa_qty * 80.00; 
        TotalAmt += Dhosa_amt;

    }
    void FoodOrder::MasalaDhosa(float Dhosa_qty)
    {   
        Dhosa_amt = Dhosa_qty * 100.00; 
        TotalAmt += Dhosa_amt;        
    }
    void FoodOrder::MaisurDhosa(float Dhosa_qty)
    {   
        Dhosa_amt = Dhosa_qty * 130.00; 
        TotalAmt += Dhosa_amt;       
    }
    void FoodOrder::JiniRoll(float Dhosa_qty)
    {   
        Dhosa_amt = Dhosa_qty * 150.00; 
        TotalAmt += Dhosa_amt;
    }        
    void FoodOrder::SweetCorn(float Dhosa_qty)
    {   
        Dhosa_amt = Dhosa_qty * 150.00; 
        TotalAmt += Dhosa_amt;        
    }
int main()
{
    int n;
    float A = n;
    float Dhosa_qty=0;
    
    FoodOrder krupal(1);
    do
    {
        cout <<"\nOrder the Item:";
        cin >> n;
        switch (n)
        {
        case 1:
            cout<<"HowMany Piece of Dhosa(simple):";
            cin >> Dhosa_qty;
            krupal.Dhosa(Dhosa_qty);
            break;
        case 2:
            cout<<"HowMany Piece of  Masala Dhosa:";
            cin >>Dhosa_qty;
            krupal.MasalaDhosa(Dhosa_qty);
            break;
        case 3:
            cout<<"HowMany Piece of Maisur Dhosa:";
            cin >>Dhosa_qty;
            krupal.MaisurDhosa(Dhosa_qty);
            break;
        case 4:
            cout<<"HowMany Piece of Jini Roll:";
            cin >>Dhosa_qty;
            krupal.JiniRoll(Dhosa_qty);
            break;
        case 5:
            cout<<"HowMany Piece of Sweet Corn:";
            cin >>Dhosa_qty;
            krupal.SweetCorn(Dhosa_qty);
            break; 
        case 0:            
            break;
        default:
            cout << "\n please call the function";
            break;
        }
    }while (n != 0);    
}



