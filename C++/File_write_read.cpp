#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int n;
    char input[75];
    ofstream os;
    cout<<"Enter n";
    cin>>n;
    do
    {
        os.open("write_read.txt");
        cout<<"writing in file:"<<endl;
        cout<<"Enter your name :";
        cin.getline(input,100);
        os<<input<<endl;
        cout<<"Please Enter Your Contact:";
        cin>>input;
        cin.ignore();
        os<<input<<endl;
    } while (n != 0);
    
    os.close();
    ifstream is;
    string line;
    is.open("Write_read.txt");
    cout<<"reading from txt file:"<<endl;
    while(getline(is,line))
    {
        cout<<line<<endl;
    }
    is.close();
    return 0;
}