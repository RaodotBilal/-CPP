#include<iostream>
using namespace std;
main()
{
	int a,b,c,d;
	cout<<"Please! inter your consumed units\n;
	cin>>a;
	if(a<=100 && a>=0)
	{
		cout<<"your Electricity is :"<<a*10;

	}
	else if(a<=200 && a<=101 )
	{
		cout<<"your bill is :"<<a*13
	}
	else if(a<=201 && a<=300)
	{
		cout <<"your bill is :"<<a*15;
		else if ( a<=301)
	{
		cout<<"your bill is :"<<a*18;
	}
	}
}
