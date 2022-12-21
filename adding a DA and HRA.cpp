//Example 3.3: In a company an employee is paid as under:
//If his basic salary is less than Rs. 1500, then HRA = 10% of basic salary
//and DA = 90% of basic salary. If his salary is either equal to or above Rs.
//1500, then HRA = Rs. 500 and DA = 98% of basic salary. If the employee's
//salary is input through the keyboard write a program to find his gross
//salary.
#include<iostream>
using namespace std;
main( )
{
float salary, hra=0.9, da=0.1, ahra=500, ada=0.2,gross,afthra,aftrda;
cin >> salary;
if(salary <1500)	
{
	afthra=salary*hra;
	aftrda=salary*da;
	gross=afthra+aftrda;
	cout<<"gross salary is \t\n"<<gross<<endl;
	
}
else if (salary  >=1500)
{
	afthra=salary*ahra;
	aftrda=salary*ada;
	gross=afthra+aftrda;
	cout<<"gross salary is \t \n"<<gross<<endl;
}
system ("pause");
}
