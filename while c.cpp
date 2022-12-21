#include<iostream>
using namespace std;
main()
{
	int num1,num2,sum;
	cin>>num1>>num2;
	while(num1>num2)
	{
		sum=num2++;
		cout<<sum<<endl;
	}
	return 0;
}
