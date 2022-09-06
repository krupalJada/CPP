#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class result
{
    int i,a1[10], a2[10], a3[10];
    float total[10], per[10];

public:
    int input()
    {
        for(i=0;i<5;i++){
            cout << "Enter s1:";
            cin >> a1[i];
            cout << "Enter s2:";
            cin >> a2[i];
            cout << "Enter s3:";
            cin >> a3[i];
        }
        
    }
    int procc()
    {

        for(i=0;i<5;i++){
            total[i] = a1[i] + a2[i] + a3[i];
            per[i] = (total[i] / 3);
        }
        return 0;
    }
    int output()
    {
        cout << "sub1\tsub2\tsub3\ttotal\tper\tgrade";
        for(i=0;i<5;i++){
            cout << "\n"<< a1[i] << "\t" << a2[i] << "\t" << a3[i] << "\t" << total[i] << "\t" << fixed << setprecision(2) << per[i];
            if (per[i] >= 90)
                cout << "\tA";
            else if (per[i] < 90 && per[i] >= 75)
                cout << "\tB";
            else if (per[i] < 75 && per[i] >= 60)
                cout << "\tc";
            else if (per[i] < 60 && per[i] >= 35)
                cout << "\td";
            else
            cout << "\tfail";
        }
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