#include<iostream>
int main ()
{
	 int i,n,a=1;
	 std::cout<<"Enter n : ";
	 std::cin>>n;

	 for(i=1;i<=n;i++){
		std::cout<<" "<<a;
        a+=a;
     }

}