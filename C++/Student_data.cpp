#include<iostream>
using namespace std;
class Student
{   
    private:
    int admin_no[10];
    string student_Name[10];
    float eng[10],math[10],sci[10],total[10];
    public:
    int i = 2;
    void Takedata();
    void calTotal();
    void Showdata();
}; 
    void Student::Takedata()
    {
        fflush(stdin);
        cout<<"Enter the Admin no:"<<endl;
        cin>>admin_no[i];
        fflush(stdin);
        cout<<"Enter Student name:"<<endl;
        getline(cin,student_Name[i]);
        fflush(stdin);
        cout<<"Enter the subjects marks"<<endl;
        fflush(stdin);
        cout<<"English :";
        cin>>eng[i];
        fflush(stdin);
        cout<<"\nMaths :";
        cin>>math[i];
        fflush(stdin);
        cout<<"\nScinece :";
        cin>>sci[i];
    }
    void Student::calTotal()
    {
        total[i] = eng[i]+math[i]+sci[i];
    }
    void Student::Showdata()
    {
        cout<<"\t\tStudent Data"<<endl;
        cout<<"Admin no\tName\tEnglish\tMaths\tScience\tTotal";
        for(int i = 0;i<=2;i++){
            cout<<"\n"<<admin_no[i]<<"\t\t"<<student_Name[i]<<"\t"<<eng[i]<<"\t"<<math[i]<<"\t"<<sci[i]<<"\t"<<total[i];
        }
    }
int main()
{
    Student krupal;
    for(int p=1;p<=2;p++){
        krupal.Takedata();
    }
    krupal.calTotal();
    krupal.Showdata();
}

