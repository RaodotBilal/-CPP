#include<iostream>
using namespace std;
main()
{
	int num, M;
	cout<<"please! enter your values\n";
	cin>>num;
	if(num==0)
	{ cout<<"your Number is not odd or even\n";

	M=num%2;
	}

	else if(M==0)
	{ cout<<"your number is even\n";
	}

	else if(M!=0)
	{ cout<<"your Number is Odd\n";
	}
	return 0;
}
