#include<iostream>
using namespace std;
main()
{
	char a;
	cin>>a;
	switch(a)
{
		case 'A':
		{
			cout<<"Testing 1\n";
		break;
		}
		case 'C':
			{
				cout<<"Testing 3\n";
			break;}
			case 'D':
			{
				cout<<"Testing 4\n";
			break;}
			case 'B':
			{
				cout<<"Testing 2\n";
			break;}
			case 'E':
			{
				cout<<"Testing 5\n";
			break;}
			default :
			{
			
				cout<<"Value is more then E\n";
			break;}
				
			}
			int b;
			cin>>b;
			switch(b)
			{
			
			case 1:
			{
				cout<<"Testing num 1\n";
			break;}
			
			case 2:
			{
				cout<<"Testing num 2\n";
			break;}
			
			case 3:
			{
				cout<<"Testing num 3\n";
			break;}
			
			case 4:
			{
				cout<<"Testing num 4\n";
			break;}
			
			case 5:
			{
				cout<<"Testing num 5\n";
			break;}
			default :{
				cout<<"Values is more then 5\n" ;
				break;
			}
		}
				return 0;
}
