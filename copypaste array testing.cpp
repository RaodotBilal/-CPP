#include<iostream>
using namespace std;
int fact(int factorial)
{

	int number, multiplier=1;
	cout<<"Enter a number for its Factorial : ";
	cin>>number;
	for(int i=1;i<=number; ++i)
	{
		multiplier=multiplier*i; 
	}

	return multiplier;
}
int main()
{
	int factorial;
	cout<<fact(factorial);
	return 0;
}

