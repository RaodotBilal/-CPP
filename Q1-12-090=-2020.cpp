#include<iostream>
using namespace std;
main()
{
	
	int a;
	cout<<"Let's check your value is Positive or Negative or Nutral\n";
	//taking values from user
	cin>>a;
//Logic: Values biiger then Zero are positive and lesser then Zero are Nagatives
	//Following line will check if given value is bigger then 0 or not
	if(a>0){
		cout<<"Positive\n";
	}
	//Following line will check if value is lesser then ZERO
else	if(a<0)
	{ cout<<"Negative";
	}
	//Following line will check if given value is Zero
	else if(a==0)
	{ cout<<" you input is "<<a<<" And 0 Nutral"<<endl;
	}
	return 0;
}
