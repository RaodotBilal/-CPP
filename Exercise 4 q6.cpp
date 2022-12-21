/*Write a C++ program that receives two integer values from the user.
 The program then should print the sum (addition), difference (subtraction), product (multiplication), quotient (division), and remainder after division (modulus). 
 Your program must use only integers. A sample program run would look like (the user enters the 10 and the 2 after the colons, and the program prints the rest):
  Please enter the first number: 10 Please enter the second number: 2 10 + 2 = 12 10 - 2 = 8
10 * 2 = 20 10 / 2 = 5 10 % 2 = 0 Can you explain the results it produces for all of these operations? */
#include<iostream>
using namespace std;
main()
{
	//initilazation of values.
	int num1,num2,sum,multi,mod,person,minus,divid;
	// asking for values for num1 and num2
	cout<<"PLease! enter value for num1\n";
	cin>>num1; cout<<"pease! enter value for num2\n";cin>>num2;
	//adding numbers
	sum=num1+num2;
	// multiplying numbers
	multi=num1*num2;
	//dividing numbers
	divid=num1/num2;
	//taking modulus
	mod=num1%num2;
	//finding difference between numbers 
	minus=num1-num2;
	cout<<num1<<" + "<<num2<<" = "<<sum<<endl<<num1<<" - "<<num2<<" = "<<minus<<"\n"<<num1<<" / "<<num2<<" = "<<divid<<"\n"<<num1<<" % "<<num2<<" = "<<mod<<"\n"<<num1<<" * "<<num2<<" = "<<multi<<endl;
	system("pause");
	return 0;
}

