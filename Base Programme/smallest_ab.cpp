#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;

    cout<<"\n a : "<< a << "\n b : "<<b;
    if(a>b){
        cout<<"\n a is greater :  "<<a;
    }
    else
    {
        cout<<"\n b is greater : "<<b;
    }
}