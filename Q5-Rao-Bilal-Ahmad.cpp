#include<iostream>
using namespace std;
main()
{
	double a,b,c;
	double d,e;
	cout<<"Please! Enter your values for A B & C\n";
	cin>>a>>b>>c;
	
	if(b*b-4*a*c>=0);
	{
		d=(-b+ sqrt(b*b-4*a*c))/2*a;
		e=(-b- sqrt(b*b-4*a*c))/2*a;
		cout<<"Roots of the equaions are"<<d<<"\t&"<<e<<"\n";
	}
	else
{
	cout<<"Roots of the equations are not real";}
	return 0;
}
