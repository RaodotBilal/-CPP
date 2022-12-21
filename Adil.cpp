#include<iostream>
using namespace std;
main()
{
	int y,s,b;
	cout<<"your service\n";
	cin>>y;
	if(y>=5)
	{ cout<<"you are eligible";

	}
	if(y<=4)
	{
		cout<<"sorry! Bonus not available\n";

	}
	cin>>s;
	b=(s*1.05)-s;
	cout<<"bonus is"<< b<<endl;
	return 0;
	

}
