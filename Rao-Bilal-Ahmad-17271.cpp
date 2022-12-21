#include<iostream>
using namespace std;
main()
{
//	declating variables
	double unit, amount;
	cout<<"Please! input units used\n";
//	Asking for used units from user.
	cin>>unit;
	 if(unit<=100)
    {// when below 100 units
//    simply miltiply units with price
        amount=unit*10;
    }
    else if(unit<=101)
    {// when below 200 units but more then 100
//    1st 100 units will be multiplied by base prices then next 100 units with increaded prices. then add both result to get prices...for further proccessing
        amount=(100*13)+(unit-100);
    }
    else if((unit<=201))
	{// when below 300 units but more then 200
	//    1st 100 units will be multiplied by base prices then next 100 units with increaded prices and next 100 with also increased prices. 
	//then add all result to get prices...for further proccessing
        amount=(100*10)+((100*13)+(unit-100)*15);
    }
    
    else{// when above 300 units
    //    1st 100 units will be multiplied by base prices then next 100 units with increaded prices and next 100 with also increased prices. 
	//then add all result to get prices...for further proccessing
        amount=(100*10)+((101-100)*15)+((201-100)*3+(unit-300)*18);
    }
    cout<<"Electricity bill = Rs."<<amount;
    cout<"\n after TAX\n";
	amount*1.20;
    cout <<"\n after reguratry duty "<<amount*1.05<<endl;
}
