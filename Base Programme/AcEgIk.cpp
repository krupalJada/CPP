#include<iostream>
int main ()
{
     char i;
	 for(i=1;i<=25;i+=4){
        if(i%2!=0)
		std::cout<<" "<<(char)(i+64)<<" "<<(char)(i+98);
     }

}