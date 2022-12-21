# include<iostream>
using namespace std;
main()
{
	int units, amount,amount1,amount2,mount3;
	cin>>units;
	if(units<=100)
	{
		amount=units*10;
		cout<<"your bill is :"<<amount<<endl;}
		
		if(units<=101)
		{
			amount=(100*10)+((units-100)*13);
			cout<<"your bill is :"<<amount<<endl;
		}
			if(units<=201)
			{
				amount=(100*10)+(100*13)+((units-200)*15);
				cout<<"your bill is :"<<amount<<endl;
		}
				if(units<=301)
				{
					amount=(100*10)+(100*13)+(100*15)+((units-300)*18);
					cout<<"your bill is :"<<amount<<endl;
				}
}
