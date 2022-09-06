#include<iostream>
using namespace std;
void pattern(int n)
{
    int i,j,sp=15;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=sp;j++)
            cout<<" ";
        for(j=1;j<=i;j++)
        {
            cout<<" *";
        }
        sp--;
        cout<<"\n";
    }
}
int main()
{
    pattern(1);
    pattern(2);
    pattern(3);
    pattern(4);
    pattern(5);
    return 0;
} 