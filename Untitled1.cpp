#include<iostream>
using namespace std;
main()
{
	double unit, amount;
	cin>>unit;
	 if(unit<=100)
    {//below 100 units
        amount=unit*10;
    }
    else if(unit<=101)
    {//below 200 units
        amount=(100*13)+(unit-100);
    }
    else if((unit<=201))
	{//below 300 units
        amount=(100*10)+((100*13)+(unit-100)*15);
    }
    
    else{//above 300 units
        amount=(100*10)+((101-100)*15)+((201-100)*3+(unit-300)*18);
    }
    cout<<"Electricity bill = Rs."<<amount;\
    cout<"\n after TAX\n";
	amount*1.20;
    cout <<"\n after reguratry duty "<<amount*1.05<<endl;
}
