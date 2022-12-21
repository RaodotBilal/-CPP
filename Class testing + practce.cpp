//making my own class by experiencing....
#include<iostream>
using namespace std;
class Rao
{
public:
string Raoo;
void Raaoo()
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
	cout<<" just started my work"<<Raoo;
}
};
class Bilal
{
	public:
		string rao;
		void showrao()
		{
		{
	//initilazing of variables...
	int values;
	cout << "Enter the case that you want to open\n";
	cin>>values;
	//Switch statement...
	switch(values) 
	{
	 case 1:
		cout<<"Please! enter values to check : Negative\tpositive\tZERO "<<endl;
		//asking for values from user...
		cin>>values;
		//when value is greater then ZERO...
		if(values>0)
		{
		
		cout<<"you entered number is positive\n";
		}
		//when value is less then ZERO...
		if(values<0)
		{
		
		cout<<"your entered number is negative\n";
	}
	//when value is ZERO...
		if(values==0)
		{
		
		cout<<"your number is ZERO\n\n";
		break;
	}
	
	{
		case 2:
			{
				//asking values from user...
			cout<<"Please! enter values to check : Odd\tEven\tZERO"<<endl;
			cin>>values;
			//Finding Even number by diving values with 2, when answer is 0, values is EVEN...
			if(values/2==0)
			{
				cout<<"you entered value is Even\n";
			}
			//Finding Even number by diving values with 2, when answer is not 0, values is ODD...
			if(values/2 !=0)
			{
				cout<<"your entered value is even\n";
				
			}
			//when entered value is ZERO....
			if(values == 0)
			{
				cout<<"your entered value is ZERO\n\n";
				break;
			}
	}
}
	{
		case 3:
			cout<<"Please! enter values to check : Water condition "<<endl;
			//asking values from user....
			cin>>values;
			//when temp is ZERO...
			if(values==0)
			{ 
			cout<<" Condition is : ICE\n";
			}
			//when temp is greater then ZERO and lesser then 100....
			if(values>0 && values<100)
			{
				cout<<" Condition is : Water \n";
			}
			//100 was not incuded in the Qestion statement....
			//when temp is greater then 100...
			if(values>100)
			{
				cout<<" Condition is : Stream\n\n";
				break;
			}
	}
	case 4:
		cout<<"please! enter your values to check grades\n";
		//asking user for values...
		cin>>values;
	//when marks between 90-100%
		if(values>=90 && values <= 100)
	{
		cout<<"Congrats! your grade is A \n";
		
	}
	//when marks between 80-89%...
	else if (values >=80 && values<=89)
	{
	cout<<"Congrats! your grade is B \n";
	}
	//when marks between 70-79%...
		else if (values >=70 && values<=79)
	{
	cout<<"Congrats! your grade is C \n";
	}
	//when marks between 60-69%...
		else if (values >=60 && values<=69)
	{
	cout<<"Congrats! your grade is D \n";
	}
	//when marks between 0-59%...
		else if (values <=59)
	{
	cout<<"you are below D\n";
	}
	//making sure that marks can not be entered then 100...
	else if (values>100)
	{
		cout<<"invalid input\n";
		break;
	}
	system ("pause");
	
}
};
			cout<<"your output will be <<rao>> \n let's check : "<<rao;
		}
};
class Ahmad
{
	public:
		string Ahmaad;
		void Ahmaaad ()
	{
	//initilazing variables...
	int inter, test, fmarks, mmarks;
	int winter, wtest, wfmarks, wmmarks, tmarks;
	cout<<"Please! enter inerview marks"<<endl;
	cin>>inter;
	cout<<"Please! enter test makrks"<<endl;
	cin>>test;
	cout<<"Please! enter inter marks"<<endl;
	cin>>fmarks;
	cout<<"Please! enter matric marks"<<endl;
	cin>>mmarks;
	//Calculating weightage ...
	//Formula to calculate 20% weightage = total divid by 80 then Multiply with 20...
	winter=(inter/80)*20;
	//formula = test divid by 50 then multiply with 50%...
	wtest=(test/50)*50;
	//formula = 100/15= 6.666666...
	wfmarks=fmarks/6.6666666;
	//formula = 100/15= 6.666666...
	wmmarks=mmarks/6.6666666;
	//Adding all values (All values = 100)...
	tmarks=wmmarks+wfmarks+wtest+winter;
	cout<<"you toatal marks : "<<tmarks<<endl;
	//when marks are between 90-100%...
	if(tmarks>=90 && tmarks <= 100)
	{
		cout<<"Congrats! you can take admission in Medical\n";
		
	}
	//when marks are between 80-89%...
	else if (tmarks >=80 && tmarks<=89)
	{
	cout<<"Congrats! you can take admission in Engineering/coumputer science\n";
	}
	//when marks are between 70-79%
		else if (tmarks >=70 && tmarks<=79)
	{
	cout<<"Congrats! you can take admission in MLT\n";
	}
	//when marks are between 60-69%...
		else if (tmarks >=60 && tmarks<=69)
	{
	cout<<"Congrats! you can take admission in BBA\n";
	}
	//when marks are between 0-59%...
		else if (tmarks <=59)
	{
	cout<<"Congrats! you can take admission in other faculties\n";
	}
	//to halt ouput consol...
	system ("pause");
	cout<<"it's working greate dude<<0>><<0>><<0>><<0>>"<<Ahmaad;
}
};
int main()
{
	Rao s0;
	Bilal s1;
	Ahmad s2;
	s0.Raoo= "\n just started my work<<2nd time>>\n";
	s1.rao="\nRao is working at least\n";
	s2.Ahmaad = "\n It's working great\n";
	s0.Raaoo();
	s1.showrao();
	s2.Ahmaaad();
	return 0;
}
