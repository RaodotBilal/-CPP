# include<iostream>
using namespace std;
main()
{
int a, b, c, d,e,f;
	cout<< "Aggregate calculation formula. Total marks are 100.";
	cout<< "\nUniversity test obtain marks weightage is 50";
	cout<< "\nEnter your marks that you get in Test = ";
	cin>> a;
	if (a>=0 && a <= 50) {
		cout << "your marks in test is = " << a;
	}
	else
	{
	cout<< "Enter the number less than 50";
	}
	cout<< "\nInterview weightage is 20";
	cout<< "\nMarks obtained in interview  = ";
	cin>> b;
	if (b>=0 && b <= 20) {
		cout << "your marks in Interview  = " << b;
	}
	else
	{
		cout<< "Enter the number less than 20";
	}
	cout<< "\n Intermediate obtain marks weightage is 15";
	cout<< "\n Marks obtained in intermediate  = ";
	cin>> c;
	if (c>=0 && c <= 15) {
		cout<< "your marks in Intermediate  = " << c;
	}
	else
	{
		cout<< "Enter the number less than 20";
	}
	cout<< "\nMatriculation obtain marks weightage is 15";
	cout<< "\nMarks obtained in Matriculation   = ";
	cin>> d;
	if (d>=10 && d <= 15) {
		cout << "you got marks in Matriculation = " << d;
	}
	else
	{
		cout<< "Enter the number less than 15";
	}
	e = (a + b + c + d);
	cout<< "\n  your agreegate  " << e;
	if (90 <= e && 100 >= e)
	{
		cout<< " admission in medical";
	}
	else if (80 <= e && 89 >= e)
	{
		cout<< "admission in Engineering/ Computer Science";
	}
	else if (70 <= e && 79 >= e)
	{
		cout<< "admission in MLT";
	}
	else if (60 <= e && 69 >= e)
	{
		cout<< "admission in BBA";
	}
	else 
	{
		cout<< "\n admission in others departments";}
		
		return 0;
	}
