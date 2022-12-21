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
if(a<b && a<c && a<d && a<e)
{
	cout<<a<<endl;
}
else if(b<=a && b<=c && b<=d && b<=e)
{
	cout<<b<<endl;
}
	else if(c<=a && c<=b && c<=d && c<=e)
	{
		cout<<c<<endl;
	}
else if(d<=a && d<=b && d<=c && d<=e)
{ cout<<d<<endl;
}
else if(e<=a && e<=b && e<=c && e<=d)
{
	cout<<e<<endl;
}
 if(a>=b && a>=c && a>=d && a>=e)
{
	cout<<a<<endl;
}
else if(b>=a && b>=c && b>=d && b>=e)
{
	cout<<b<<endl;
}
	else if(c>=a && c>=b && c>=d && c>=e)
	{
		cout<<c<<endl;
	}
else if(d>=a && d>=b && d>=c && d>=e)
{ cout<<d<<endl;
}
else if(e>=a && e>=b && e>=c && e>=d)
{
	cout<<e<<endl;
}
return 0;
}
