#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class result
{
    int i, a1, a2, a3;
    float total, per;

public:
    int input()
    {

        cout << "Enter s1:";
        cin >> a1;
        cout << "Enter s2:";
        cin >> a2;
        cout << "Enter s3:";
        cin >> a3;
    }
    int procc()
    {

        total = a1 + a2 + a3;
        per = (total / 3);
    }
    
    int output()
    {
        

        cout << "\n"
             << a1 << "\t" << a2 << "\t" << a3 << "\t" << total << "\t" << fixed << setprecision(2) << per;
        if (per >= 90)
            cout << "\tA";
        else if (per < 90 && per >= 75)
            cout << "\tB";
        else if (per < 75 && per >= 60)
            cout << "\tc";
        else if (per < 60 && per >= 35)
            cout << "\td";
        else
            cout << "\tfail";
    }
};

int main()
{
    result krupal[10];
      
    for (int i = 0; i <= 3; i++)
    {
        krupal[i].input();
        krupal[i].procc();       
    }
    cout << "sub1\tsub2\tsub3\ttotal\tper\tgrade"; 
    for (int i = 0; i <= 3; i++)
    {
         krupal[i].output();      
    }
    
}