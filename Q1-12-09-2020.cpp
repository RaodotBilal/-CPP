#include<iostream>
using namespace std;
main()
{
	int a;
	cout<<"Let's check your value is Positive or Negative or Nutral\n";
	cin>>a;
	if(a>0){
		cout<<"Positive\n";
	}
else	if(a<0)
	{ cout<<"Negative";
	}
	else if(a==0)
	{ cout<<" you input is "<<a<<" And 0 Nutral"<<endl;
	}
	return 0;
}

