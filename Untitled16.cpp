#include<iostream>
using namespace std;
main()
{
	int x1 = 2, y1, x2 = 2, y2; 
y1 = ++x1; 
y2 = x2++; 
std::cout << x1 << " " << x2 << '\n'; 
std::cout << y1 << " " << y2 << '\n';
return 0;
}
