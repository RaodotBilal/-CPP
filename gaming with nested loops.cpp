#include<iostream>
#include<iomanip>
using namespace std;
main()
{
	
	char r;
	int row;
	int col;
	cin>>row;
	cin>>col;
	for(r='*'; r<=row; ++r)
	{
		for(char b='*'; b<=col; ++b)
	{
			cout<<setw(5)<<r+b;
	}
	cout<<endl;
}
	system("pause");
	return 0;
}
