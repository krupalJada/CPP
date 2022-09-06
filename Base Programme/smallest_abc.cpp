#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    cout<<"Enter c : ";
    cin>>c;
    if(a>b && a>c){
        cout<<"\n a is greater :  "<<a;
    }
    else if(b>c)
    {
        cout<<"\n b is greater : "<<b;
    }
    else{
        cout<<"\n c is greater : "<<c;
    }
}