#include <iostream>
int main()
{
    int a = 3 , b = 20;
    std::cout << "hello"; // :: => scope resolution operator
    std::cout << "\na : " << a << "\nb : " << b;
    // std::cout << "\na + b = " << a + b;
    // std::cout << "\na - b = " << a - b;
    // std::cout << "\na * b = " << a * b;
    // std::cout << "\na / b = " << a / b;
    if(a>b){
        std::cout<<"\na is greater : "<<a;
    }
    else{
        std::cout<<"\nb is greater : "<<b;
    }
}