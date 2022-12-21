#include<iostream>
using namespace std;
int main()
{
	int a=9,z=10,y;
	//refrence
	int& b=a;
	char j='a';
	//pointers
	char* m;
	//double pointers
	char** k;
	//triple pointers
	char*** x=&k;
	k=&m;
	m=&j;
	 int* ptr =&a;
	 //ptr=a;
	 cout<<ptr<<endl;
	 //cin>>a;
	 cin>>*ptr;
	 cout<<endl<<a<<endl<<m<<endl<<j<<endl<<k<<endl<<b<<endl<<b+z<<endl<<endl<<x;
	 
	return 99;
}
