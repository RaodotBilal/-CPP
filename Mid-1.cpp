#include<iostream>
using namespace std;

int main()
{
	int Num1,Num2;
	float F1,F2;
	cout<<"Enter your consumed units : ";
	cin>>Num1;
	if(Num1>300)
	{
		Num1=Num1*18;
		cout<<"Your bill is : "<<Num1;
	}
	else if(Num1>=201 && Num1<=300)
	{
		Num1=Num1*15;
		cout<<"Your bill is : "<<Num1;
	}
	else if(Num1>=101&& Num1<=200)
	{
		Num1=Num1*13;
		cout<<"Your bill is : "<<Num1;
	}
	else
	{
		Num1=Num1*10;
		cout<<"Your bill is : "<<Num1;
	}
	F1=Num1+(20.0/100.0*Num1);
	cout<<"\n20% tax in your bill = : "<<F1;
	F1=(5.0/100.0)*Num1;
	cout<<"\n5% Regulatory surchages = "<<F2;
	F1=F1+F2;
	cout<<"\nYour total bill is = "<<Num2;
	return 0;
}
