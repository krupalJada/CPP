#include<iostream>
#include<string>
using namespace std;
class FoodOrder
{
    public:
    FoodOrder(int);    
};

 FoodOrder::FoodOrder(int a)
    {
        cout<<"\n\n\t\t\t\t\t------------------------JK RESTAURENT---------------------------"<<endl;
        cout<<"\t\t\t\t\t-------------------WELCOME TO OUR RESTAURENT--------------------"<<endl;
        cout<<"\t\t\t\t\t----------------------------------------------------------------"<<endl;
        cout<<"\n\t\t\t\t\t\t\tNO.  Items                    Price"<<endl;
        cout<<"\t\t\t\t\t\t\t1.   Bone Fire Pizza          700.00"<<endl;
        cout<<"\t\t\t\t\t\t\t2.   Grill SandWich           350.00"<<endl;
        cout<<"\t\t\t\t\t\t\t3.   Royal Dosa               400.00"<<endl;
        cout<<"\t\t\t\t\t\t\t4.   Cheese Grill Burger      350.00"<<endl;
        cout<<"\t\t\t\t\t\t\t5.   Potato Wedges            350.00"<<endl;
        cout<<"\t\t\t\t\t\t\t6.   Roket Salad              380.00"<<endl;
        cout<<"\t\t\t\t\t\t\t7.   Spicied Cheese Narcho    250.00"<<endl;
        cout<<"\t\t\t\t\t\t\t8.   Blue Berry(Drink)        150.00"<<endl;
        cout<<"\t\t\t\t\t\t\t9.   Canoli(Pancake)          250.00"<<endl;
        cout<<"\t\t\t\t\t\t\t10.  Chocolate Chips          300.00"<<endl;
        cout<<"\n\t\t\t\t\t----------------------------------------------------------------"<<endl;
        cout<<"\t\t\t\t\t-------------NOTE : Enter 0 for confirm your Order--------------"<<endl;

    }    
int main()
{
    string Item[20] = {"","Bone_Fire_Pizza      ","Grill_SandWich       ","Royal_Dosa           ","Cheese_Grill_Burger  ","Potato_Wedges        ","Roket_salad          ",
                    "Spicied_Cheese_Narcho","Blue_Berry(Drink)    ","Canoli(Pancake)      ","Chocolate_Chips      "};
    int Rate[20] = {0,700,350,400,350,350,380,250,150,250,300};         
    int item,Bill[10],Total_amt=0,Discount=0,SGST=0,CGST=0,Pay_amt=0;
    
    // string name,Mo;
    // FoodOrder krupal(1);
    // cout<<"\nPlease Enter Your Name :";
    // getline(cin,name);
    // cout<<"\nEnter Your Contact No :";
    // getline(cin,Mo);
    // int length = Mo.size();
    // if(length!=10){
    //     cout<<"\nPlease Enter Valid Contact:";
    //     cout<<"\nEnter Your Contact No :";
    //     getline(cin,Mo);
    // }
    
    do
    {
        cout <<"\nOrder the Item:";
        cin >> item;
        switch (item)
        {
        case 1:
            cout<<"HowMany Piece of Bone Fire Pizza:";
            cin >> Q1;
            Total_amt += (Q1 * Rate[1]);            
            break;
        case 2:
            cout<<"HowMany Piece of  Grill SandWicha:";
            cin >> Q2;
            Total_amt += (Q2 * Rate[2]);
            break;
        case 3:
            cout<<"HowMany Piece of Royal Dosa :";
             cin >> Q3;
            Total_amt += (Q3 * Rate[3]);
            break;
        case 4:
            cout<<"HowMany Piece of Cheese Grill Burger:";
            cin >> Q4;
            Total_amt += (Q4 * Rate[4]);
            break;
        case 5:
            cout<<"HowMany Piece of Potato Wedges:";
            cin >> Q5;
            Total_amt += (Q5 * Rate[5]);
            break;
        case 6:
            cout<<"HowMany Piece of Roket Salad:";
            cin >> Q6;
            Total_amt += (Q6 * Rate[6]);
            break;
        case 7:
            cout<<"HowMany Piece of Spicied Cheese Narcho:";
            cin >> Q7;
            Total_amt += (Q7 * Rate[7]);
            break;  
        case 8:
            cout<<"HowMany Blue Berry(Drink):";
            cin >> Q8;
            Total_amt += (Q8 * Rate[8]);
            break; 
        case 9:
            cout<<"HowMany Canoli(Pancack):";
            cin >> Q9;
            Total_amt += (Q9 * Rate[9]);
            break; 
        case 10:
            cout<<"HowMany Piece of Chocolate Chips:";
            cin >> Q10;
            Total_amt += (Q10 * Rate[10]);
            break;         
        case 0:
            if(Total_amt > 5000){
                Discount = Total_amt * 0.10;
                Total_amt -= Discount;
            }
            SGST = Total_amt * 0.025;
            CGST = SGST;            
            Pay_amt = Total_amt + SGST + CGST;
            cout<<"\t\t\t\t\t------------------------JK RESTAURENT---------------------------"<<endl;
            cout<<"\t\t\t\t\t-------------------------ORDER BILL-----------------------------"<<endl;
            cout<<"\t\t\t\t\t----------------------------------------------------------------"<<endl;
            //cout<<"\n\t\t\t\t\tCustomer Name : "<<name<<endl;
            //cout<<"\t\t\t\t\tContact No : "<<Mo<<endl;
            cout<<"\n\t\t\t\t\t----------------------------------------------------------------"<<endl;
            cout<<"\n\t\t\t\t\t\tNO.  Items\t                  Price    Qty  Amt"<<endl;
            cout<<"\t\t\t\t\t\t1.   "<<Item[1]<<"        700.00   "<<Q1<<"   "<<Q1*Rate[1]<<endl;
            cout<<"\t\t\t\t\t\t2.   "<<Item[2]<<"        350.00   "<<Q2<<"   "<<Q2*Rate[2]<<endl;
            cout<<"\t\t\t\t\t\t3.   "<<Item[3]<<"        400.00   "<<Q3<<"   "<<Q3*Rate[3]<<endl;
            cout<<"\t\t\t\t\t\t4.   "<<Item[4]<<"        350.00   "<<Q4<<"   "<<Q4*Rate[4]<<endl;
            cout<<"\t\t\t\t\t\t5.   "<<Item[5]<<"        350.00   "<<Q5<<"   "<<Q5*Rate[5]<<endl;
            cout<<"\t\t\t\t\t\t6.   "<<Item[6]<<"        380.00   "<<Q6<<"   "<<Q6*Rate[6]<<endl;
            cout<<"\t\t\t\t\t\t7.   "<<Item[7]<<"        250.00   "<<Q7<<"   "<<Q7*Rate[7]<<endl;
            cout<<"\t\t\t\t\t\t8.   "<<Item[8]<<"        150.00   "<<Q8<<"   "<<Q8*Rate[8]<<endl;
            cout<<"\t\t\t\t\t\t9.   "<<Item[9]<<"        250.00   "<<Q9<<"   "<<Q9*Rate[9]<<endl;
            cout<<"\t\t\t\t\t\t10.  "<<Item[10]<<"        300.00   "<<Q10<<"   "<<Q10*Rate[10]<<endl;            
            cout<<"\n\t\t\t\t\t---------------------------------------------------------------"<<endl;
            cout<<"\n\t\t\t\t\t\t       Total Amount Bill    :"<<Total_amt<<endl;
            cout<<"\t\t\t\t\t\tLess : Discount             :"<<Discount<<endl;
            cout<<"\t\t\t\t\t\tAdd  : SGST                 :"<<SGST<<endl;
            cout<<"\t\t\t\t\t\tAdd  : CGST                 :"<<CGST<<endl;
            cout<<"\t\t\t\t\t\t       Total Payable Amount :"<<Pay_amt<<endl;
            cout<<"\n\t\t\t\t\t-----------------------------------------------------------------"<<endl;
            cout<<"\t\t\t\t\t-----------------------Thank You For Order-----------------------"<<endl;
            break;
        default:
            cout << "\n please call the function";
            break;
        }
    }while (item != 0); 
}



