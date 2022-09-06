#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class result
{
    int a1, a2, a3;
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

        return 0;
    }
    int output()
    {
        cout << "s1\ts2\ts3\ttotal\tper\tgrade";
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
        return 0;
       
    }
};
int main()
{
    result krupal;
    krupal.input();
    krupal.procc();
    krupal.output();
}