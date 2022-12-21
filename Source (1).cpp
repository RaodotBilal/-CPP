#include<iostream>
using namespace std;
int main()
{
int d, e, f, g, h, i, j, k, l, m, n, p, q;
string a, b, c;
double o;
cout << "Enter the name of the 1st batsman = "; cin >> a;
cout << "Enter the name of the 2nd batsman = "; cin >> c;
cout << "Openar is = " << a <<" & "<<c;
cout << "\nEnter the name of Bowler = "; cin >> b;
cout << "what happened on first ball = "; cin >> d;
/*if (f >= 0 && f >= 6)
{
	cout << a << "\n score = " << f<<endl;
	cout << c << "score = 0"<<endl;
	cout <<"ball 01" << "bowled by" << b<<endl;
}
cout << "what happened on 2nd ball = "; cin >> d;//1,2..6*/
q = 0; p = 0;

if (d ==1 || d==3||d==5)
{
	cout << a << "\n score = " << d << "on ball" << ++q << endl;
	cout << c << " score = 0 " << endl;
	cout << " ball  "<<p << "bowled by " << b << endl;
	
	cout << "2nd ball = "; cin >> l;
	cout << c << "\n score = " << l << "on ball" << ++p << endl;
	cout << a << "\n score = " << d << "on ball 1";
}
/*else if  (d == 0 || d == 2 || d == 4|| d==6)
{
	cout << a << "\n score = " << d << endl;
	cout << c << " score = 0 " << endl;
	cout << " ball 01 " << "bowled by " << b << endl;
}

cout << "\nwhat happened on 2nd ball = "; cin >> e;
if (e == 1 || e == 3 || e == 5)
{
	cout << a << "\nscore = " << c << "\nscore = 0" << e << "ball 01" << "bowled by" << b;
}
else if (e == 0 || e == 2 || e == 4 || e == 6)
{
	cout << a << "\nscore = " << c << "\nscore = 0" << e << "ball 01" << "bowled by" << b;
}
cout << "what happened on first ball = "; cin >> f;
if (f >= 0 && f >= 6)
{
	cout << a << "\n score = " << d+e+f << "ball 03" << "bowled by" << b << "speed of ball is";
}cout << "what happened on first ball = "; cin >> g;
if (g >= 0 && g >= 6)
{
	cout << a << "\n score = " << d+e+f+g << "ball 04" << "bowled by" << b << "speed of ball is";
}cout << "what happened on first ball = "; cin >> h;
if (h >= 0 && h >= 6)
{
	cout << a << "\n score = " << d + e + f + g+h << "ball 05" << "bowled by" << b << "speed of ball is";
}cout << "what happened on first ball = "; cin >> i;
if (i >= 0 && i >= 6)
{
	cout << a << "\n score = " << d + e + f + g+h+i << "ball 06" << "bowled by" << b << "speed of ball is";
}*/
}