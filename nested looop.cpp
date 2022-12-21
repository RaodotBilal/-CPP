#include<iostream>
#include<iomanip>
using namespace std;
main()
{
	int i;

	for(i=1; i<=10; i++)
	{
	
	for(int j=1; j<=10;j++)
	{
	cout<<setw(9)<<j*i;
}
cout<<endl;
	}
}
