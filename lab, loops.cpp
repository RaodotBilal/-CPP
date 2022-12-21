#include<iostream>
using namespace std;
main()
{
	int a,v,b;
	cout<<"input a\n";
	cin>>a;
	while(a<=10)
	{
		cout<<"Rao Bilal Ahmad "<<a<<endl;
		++a;
	}
	system("pause");
	cout<<"input b\n";
	cin>>b;
	do
	{
		cout<<"Bilal only "<<b<<endl;
		++b;

	}
	while(b<=5);
	system("pause");
	for (v=4; v<=9; ++v)
	{ cout<<"Rao only "<<v<<endl;
	}
	return 0;
}
