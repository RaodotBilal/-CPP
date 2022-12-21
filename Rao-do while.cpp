#include<iostream>
using namespace std;
main()
{
	int num1,num3,sum;
	cout<<"Enter num1"<<endl;
	cin>>num1;
	cout<<"Enter value for num3\n";
	cin>>num3;
	do {
		num1++;
		sum=num1+num3;
		cout<<"sum is "<<sum<<endl;
	}
	while(sum<=20);
	return 0;
}
