#include<iostream>
using namespace std;
int main()
{
	int a;
	cout << "Enter the caes that you want to open";
	cin >> a;
	switch (a)
	{
		case 1:
	{cout << "Enter the value = ";
	cin >> a;
	if (a == 0) {
		cout << "The value is zero";
		if (a > 0) {
			cout << "The value is postive";
		}
		else {
			cout << "The value is Negative";
		}
	}
	case 2:
	{ //here i,m finding even and odd
		cout << "Enter the value = ";
		cin >> a;
		if (a == 0) {
			cout << a << " = Your Given Value is Neither";
		}
		else if (a % 2 == 0) {
			cout << a << " = Your Given Number is Even";
		}
		else {
			cout << a << " = Your Given Number is Odd";
		}
	case 3:
		cout << "Enter the value";
		cin >> a;
		if (0 <= a && 100 >= a)
		{
			cout << "Water";
		}
		else if (0 > a)
		{
			cout << "Ice";
		}
		else if (100 < a)
		{
			cout << "Grade c";
		} }
	case 4:
	{//Grade
		cout << "Enter the value = ";
		cin >> a;
		if (90 <= a && 100 >= a)
		{
			cout << "Grade A";
		}
		else if (80 <= a && 89 >= a)
		{
			cout << "Grade B";
		}
		else if (70 <= a && 79 >= a)
		{
			cout << "Grade c";
		}
		else if (60 <= a && 69 >= a)
		{
			cout << "Grade D";
		}
		else
		{
			cout << "\ninvalid";
		}}
	return 0;
	}
}
}
