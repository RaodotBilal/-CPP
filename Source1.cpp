#include<iostream>
using namespace std;
int main()
{
	int d, e, f, g, h, i, j, k, l, m, n, p, q;
	string a, b, c;
	double o;
	cout << "Enter the name of the 1st batsman = "; cin >> a;
	cout << "Enter the name of the 2nd batsman = "; cin >> c;
	cout << "Openar is = " << a << " & " << c;
	cout << "\nEnter the name of Bowler = "; cin >> b;
	cout << "what happened on first ball = "; cin >> d;

	do while (i=0; i<=7;)
	{
	

		if (d == 1 || d == 3 || d == 5)
		{
			q = 0; p = 0;
			cout << a << "\n score = " << d << "on ball" << ++q << endl;
			cout << c << " score = 0 " << endl;
			cout << " ball  " << p << "bowled by " << b << endl;

			cout << "2nd ball = "; cin >> l;
			cout << c << "\n score = " << l << "on ball" << ++p << endl;
			cout << a << "\n score = " << d << "on ball 1";
		}
	}

}
