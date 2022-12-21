//Name = Rao Bilal Ahmad
//Roll no = 17271
//Date = 01-31-2021
//submitted to = Muhammad Ahmad /Sheikh Aftab Ahmad 
//Question 3
#include<iostream>
using namespace std;
main()
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
	return 0;
	
}
}

