#include<iostream>
using namespace std;
main( )
{
double discount, morethen,price,payable ,value;
cout<<" price per item\n";

cin>>price;
cout<<"item you get\n";
cin>>morethen;
payable=price*morethen;
if(morethen >1000)	
{
cout<<"after discount\t:"<< payable*0.9 <<endl;
}
else if (morethen<=1000)
{
payable=price*morethen;	
cout<<payable;
}
return payable;
}
