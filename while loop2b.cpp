#include<iostream>
using namespace std;
main()
{
	int a,b,c;
	cout<<"Enter your values for tabel \n";
	cin>>a;
	cout<<"enter values for tables length initial and end \n";
	cin>>b>>c;

	while(b<=c)
	{ cout<<a<< " * "<<b<<" = "<<a*b<<endl;
	b++;
}
	system("pause \n");
	return 0;
}
