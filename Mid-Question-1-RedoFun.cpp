//Name = Rao Bilal Ahmad
//Roll no = 17271
//Date = 01-31-2021
//submitted to = Muhammad Ahmad /Sheikh Aftab Ahmad 
//Question 1
#include<iostream>
using namespace std;
main()
{
	//initilazain of required variables 
	int units, amount;
	double tamount, ramount, btbpaid;
	//asking values from user...
	cout<<"Please! input used units\n";
	cin>>units;
	//when units are less then 100 
	if(units<=100) //if units are less then or equal to 100
	{
		amount=units*10; //units * 10 to get bill
		cout<<" Your Electricity bill\n"<<amount<<endl;
		
	}
	//when units are more then 100 but less then or equal to 200
	 else if(units>=101 ) // if units are greater then 100 but less then or equal to 200
	{
		amount=((100*10)+((units-100)*13));	//units 1-100 will be calculated @ 10, units above 100 will be calculated @ 13
		cout<<" Your Electricity bill\n"<<amount<<endl;
	}
	//when units are more then 200 but less then or equal to 300
		else  if(units>=201 ) // if units are greater then 200 but less then or equal to 300
	{
		amount=((100*10)+(100*13)+((units-100)*15)); 	//units 1-100 will be calculated @ 10, units 101-200 will be calculated @ 13 , units above 200 will be calculated @ 15...
		cout<<" Your Electricity bill\n"<<amount<<endl;
	}
	//when units are more then 300
	 else if (units>=301) 	//units 1-100 will be calculated @ 10, units  101-200 will be calculated @ 13 , units 201-300 will be calculated @ 15, units above 300 will be calculated @ 18...
	{
		amount=((100*10)+(100*13)+(100*15)+((units-300)*18)) ;
		cout<<" Your Electricity bill\n"<<amount<<endl;
	}
	  //Adding tax into Raw bill....
    cout<<"\n after TAX\n";
	 //formula: 20/100 then add 1 to answer...(1+0.20=1.20)
	 //multiply amount*1.20 to add 20% tax...
	 tamount=amount*1.20;
	 cout<<tamount<<endl;
	 //formula: 5/100 then add 1 into answer...
	 // 1.05* amount to add reguratry duty....
    cout <<"\n after reguratry duty \n";
	cout<<tamount*1.05<<endl;
	//to halt output consol...
	system("pause");
	return 0;
}
