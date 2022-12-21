#include<iostream>
using namespace std;
main()
{
	char num;
	cin>>num;
	if(num=='j' || num=='J')
	{
		cout<<"Junior's Salary is 275"<<endl;
		
	}
	else if(num=='s'|| num=='S')
	{ cout<<"Senior's Salary is 400"<<endl;}
	else if(num!='s'|| num!='S'|| num!='j' || num!='J')
	{ cout<<"Invalid Input \n please try again with  J,  j,  S,  s";
	}

	return 0;
}
