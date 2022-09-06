// without declare global variable

#include<iostream>
using namespace std;
int output(int a1,int a2,int a3,float sum,float pers){
    cout<<"s1\ts2\ts3\ttotal\tper\tgrade";
    cout<<"\n"<<a1<<"\t"<<a2<<"\t"<<a3<<"\t"<<sum<<"\t"<<pers;
    if (pers>=90)
        cout<<"A";
   else if (pers<90 && pers>=75)
        cout<<"B";
   else if (pers<75 && pers>=60)
        cout<<"c";
   else if (pers<60 && pers>=35)
        cout<<"d";
   else
        cout<<"fail";
    return 0;
}
int procc(int x1,int x2,int x3){
    float total,per;
    total=x1+x2+x3;
    per = (total/3);

    output(x1,x2,x3,total,per);

    return 0;    
}
int  input(){
    int s1,s2,s3;
    cout<<"Enter s1:";
    cin>>s1;
    cout<<"Enter s2:";
    cin>>s2;
    cout<<"Enter s3:";
    cin>>s3;
    procc(s1,s2,s3);
}
int main(){

    input();

    return 0;
}

