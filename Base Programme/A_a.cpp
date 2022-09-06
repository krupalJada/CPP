#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter ch : ";
    cin>>ch;
    if(65<=ch && ch<=90){
    cout<<"this is small ch : "<<(char)(ch+32);
    }
    else if(97<=ch && ch<=122){
    cout<<"this is small ch : "<<(char)(ch-32);
    }
} 