#include <iostream>
using namespace std;
int main()
{
    int i, stat[5], eco[5], ac[5];
    float p[5], t[5];

    for (i = 0; i < 5; i++)
    {
        cout << "Enter stat marks[" << i << "] :";
        cin >> stat[i];
    }
    for (i = 0; i < 5; i++)
    {
        cout << "Enter eco marks[" << i << "] :";
        cin >> eco[i];
    }
    for (i = 0; i < 5; i++)
    {
        cout << "Enter ac marks[" << i << "] :";
        cin >> ac[i];
    }
    cout<<"\n";
    cout << "stat\teco\tac\ttotal\tper\tgrade";\
    for (i = 0; i < 5; i++)
    {
        t[i] = stat[i] + eco[i] + ac[i];
        p[i] = (t[i] * 100) / 300;
        cout << "\n" << stat[i] << "\t" << eco[i] << "\t" << ac[i] << "\t" << t[i] << "\t" << p[i];

        if (stat[i] <= 35 || eco[i] <= 35 || ac[i] <= 35)
        {
            cout << "\tFail";
        }
        else
        {
            if (p[i] >= 90)
            {
                cout << ("\tA");
            }
            else if (75 <= p[i] && 90 > p[i])
            {
                cout << "\tB";
            }
            else if (60 <= p[i] && 75 > p[i])
            {
                cout << "\tc";
            }
            else if (40 <= p[i] && 60 > p[i])
            {
                cout << "\tD";
            }
            else if (40 > p[i])
            {
                cout << "\tFail";
            }
        }
    }
}