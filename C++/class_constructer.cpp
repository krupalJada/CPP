#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class result
{    
    int a,b,c;
    float total,per;
public:
    result(int s1, int s2,int s3)
    {
        a = s1;
        b = s2;
        c = s3;
    }
    int procc()
    {

        total = a + b + c;
        cout<<"\ntotal :"<<total;
        per = (total / 3);
        cout<<"\npercentage : "<<per;
    }
};
int main()
{
    int a,b,c,i;
      
    for (int i = 0; i < 3; i++)
    {
       cout<<"\nenter s1:";
       cin>>a;
       cout<<"enter s2:";
       cin>>b;
       cout<<"enter s3:";
       cin>>c;
       result ans(a,b,c);
       ans.procc();
    }
    return 0;
    
}