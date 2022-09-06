#include<iostream>
int sum(int i,int j)
{
    return i,j;
}
int main()
{
    int i,j;
    for(i=1;i<=5;i++){
        for(j=i;j>=1;j--)
        {
            std::cout<<" *";
        }
        std::cout<<"\n";
    }
    return 0;
}