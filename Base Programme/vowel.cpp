#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter ch : ";
    cin>>ch;
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        cout<<"this is vovel ch : "<<ch;
    }
    else if(ch=='A' || ch=='E' ||ch=='I' || ch=='O' || ch=='U'){
        cout<<"this is vovel ch : "<<ch;
    }
    else
    {
        cout<<"this is not vovel :"<<ch;
    }
}