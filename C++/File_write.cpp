#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream krupal("file1.txt");
    if(krupal.is_open()){
        krupal<<"Welcome to our World";
    }else{
        cout<<"File opening is full";
    }
    return 0;
}