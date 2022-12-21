#include <iostream>
using namespace std;
int main ()
{

	int a, b, c, d, e;
	cout << "Enter the value of A = "; 
	cin >> a;
	cout << "Enter the value of B = "; 
	cin >> b;
	cout << "Enter the value of C = ";
	 cin >> c;
	cout << "Enter the value of D = "; 
	cin >> d;
	cout << "Enter the value of E = "; 
	cin >> e;
	if(a!=b && a!=c && a!=d && a!=e)
	{
	cout<<"Your value if UNIQUE\n";
	}
	else {
		cout<<"Your values have DUBLICATES\n";
	}
	 if(b!=a && b!=c && b!=d && b!=e)
	{
		cout<<"Your value if UNIQUE\n";
	}
	else
	{
		cout<<"Your values have DUBLICATES\n";
	 }
	  if(c!=a && c!=b && c!=d && c!=e)
	{
		cout<<"Your value if UNIQUE\n";
	}
	else {
		cout<<"Your values have DUBLICATES\n";
	}
	 if(d!=a && d!=b && d!=c && d!=e)
	{
		cout<<"Your value if UNIQUE\n";
	}
	else
	{
		cout<<"Your values have DUBLICATES\n";
	 } if(e!=a && e!=b && e!=c && e!=d)
	{
		cout<<"Your value if UNIQUE\n";
	}
	else {
		cout<<"Your values have DUBLICATES\n";
	}
	
}
