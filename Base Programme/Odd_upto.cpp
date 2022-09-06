#include<iostream>
int main ()
{
	 int i,n;
	 std::cout<<"Enter n : ";
	 std::cin>>n;

	 for(i=1;i<=n;i++){
         if(i%2!=0)
		std::cout<<" "<<i;
     }

}