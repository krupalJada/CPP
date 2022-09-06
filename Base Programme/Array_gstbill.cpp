#include<iostream>
using namespace std;
int main ()
{
 	int i,qty[5],rate[5],t[5];
  	float r[5],g[5],n[5],d[5],dr,gr,total=0,gst=0,dis=0,amount=0;
for (i=0;i<5;i++)
    	{
    	  	cout<<"Enter qty["<<i<<"] :";
    	  	cin>>qty[i];
    	}
for (i=0;i<5;i++)
    	{
    	  	cout<<"Enter rate["<<i<<"] :";
      		cin>>rate[i];
    	}
for(i=0;i<5;i++)
   	{
     	 t[i]=qty[i]*rate[i];
   	}
for(i=0;i<5;i++)
  	 {
     	 d[i]=t[i]*dr;
     	 if(1000>=t[i])
		d[i]=t[i]*0;
      	else if(1000<t[i] && t[i]<=2000)
		d[i]=(t[i]*0.05);
      	else if(2000<t[i] && t[i]<=5000)
		d[i]=(t[i]*0.10);
      	else if(5000<t[i])
		d[i]=(t[i]*0.15);
  	 }
for(i=0;i<5;i++)
   {
      r[i]=t[i]-d[i];
      g[i]=r[i]*gr;
   }
for(i=0;i<5;i++)
  	 {
     	 g[i]=r[i]*dr;
     	 if(1000>=r[i])
		g[i]=r[i]*0;
      	else if(1000<r[i] && r[i]<=2000)
		g[i]=(r[i]*0.12);
      	else if(2000<r[i] && r[i]<=5000)
		g[i]=(r[i]*0.18);
      	else if(5000<r[i])
		g[i]=(r[i]*0.28);
  	 }
for(i=0;i<5;i++)
   {
      n[i]=r[i]+g[i];
      total=total+t[i];
      dis=dis+d[i];
      gst=gst+g[i];
      amount=amount+n[i];
   }
 
	 cout<<"\nqty\trate\tamount\tdis.\tr-Amt\tGst\tnetamount:";
      
for(i=0;i<5;i++)
   {
    	cout<<"\n"<<qty[i]<<"\t"<<rate[i]<<"\t"<<t[i]<<"\t"<<d[i]<<"\t"<<r[i]<<"\t"<<g[i]<<"\t"<<n[i];
   }
    	cout<<"\n ------------------------------------------------------------------------";
    	cout<<"\n total amount : "<<total;
    	cout<<"\n less :total discount : "<<dis;
    	cout<<"\n total gst : "<<gst;
    	cout<<"\n amount paid :"<<amount;
   
    return 0;;  
}
    
