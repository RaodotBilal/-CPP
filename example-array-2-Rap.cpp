#include<iostream>
using namespace std;
main()
{
	string names[5];
	cout<<"input your array values as names\n";
	cin>>names[0]>>names[1]>>names[2]>>names[3]>>names[4];
	//using loop to get all elements in the output screen.
	for(int r=1; r<5; ++r) 
	{
		cout<<endl<<names[r]<<endl;
	}
	
	system("pause");
}
