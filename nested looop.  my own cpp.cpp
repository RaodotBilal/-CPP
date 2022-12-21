#include<iostream>
#include<iomanip>
using namespace std;
main()
{
	
	int r;
	int row;
	int col;
	cin>>row;
	cin>>col;
	for(r=1; r<=row; ++r)
	{
		for(int b=1; b<=col; ++b)
	{
			cout<<setw(5)<<r+b;
	}
	cout<<endl;
}
	system("pause");
	return 0;
}
