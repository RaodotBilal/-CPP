//Write a function with the name of fact, 
//which calculate factorial of a value that is sent as an argument

#include<iostream>
using namespace std;
int fact(int f)
{

	int k=1,n;//6 - 6x5,6x4.....
	cout<<"Enter a number for its Factorial : ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		k=k*i; //formula
	}
	//cout<<"Factorial of "<<n<<" is : "<<k;
	return k;
}
int main()
{
	int f;
	cout<<fact(f);
	return 0;
}

