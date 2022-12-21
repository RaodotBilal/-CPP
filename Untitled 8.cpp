#include<iostream>
using namespace std;
int main () {
	double C, r;
	const double PI = 3.14159;
	// Formula for the area of a circle given its radius
	C = 2 * PI * r;
	// Get the radius from the user
	cout<<"Please enter the circle's radius: ";
	cin>>r;
	// Print the circumference
	std:: cout << "Circumference is " << C << '\n';
}

