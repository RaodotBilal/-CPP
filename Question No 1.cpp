//1.	Write a program to check whether a number is positive, negative or zero.
#include<iostream>
using namespace std;

function (int value)
{
if (value < 0)	
{
	cout<<"its a nagative number\n";
	
}
else if(value == 0)
{
	cout<<"it's ZERO\n ZERO is a nutural number\n";
}
else if(value > 0)
{
	cout<<"it's positive number\n";
	
}
}
main()
{
	int value;
	cout<<"Please enter your value to check its properties :\n";
	cin>>value;
	function(value);
}
