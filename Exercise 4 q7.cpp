/* 7. Write a C++ program that receives two double-precision floating-point values from the user.
 The program then should print the sum (addition), difference (subtraction), product (multiplication),
  and quotient (division). Your program should use only integers.
   A sample program run would look like (the user enters the 10 and the 2.5 after the colons, and the program prints the rest):
    Please enter the first number: 10 Please enter the second number: 
	2.5 10 + 2.5 = 12.5 10 - 2.5 = 7.5 10 * 2.5 = 25 10 / 2.5 = 4 
	Can you explain the results it produces for all these operations?
 What happens if you attempt to compute the remainder after division (modulus) with double-precision floating-point values? */
 #include<iostream>
using namespace std;
main()
{
	//initilazation
	double num1,num2,sum,minus,multi,divid;
	//Asking values from user...
	cout<<"Please! enter your values for num1\n";
	cin>>num1;
	cout<<"Please! enter your values for num2\n";
	cin>>num2;
		//adding numbers
	sum=num1+num2;
	// multiplying numbers
	multi=num1*num2;
	//dividing numbers
	divid=num1/num2;
	//finding difference between numbers 
	minus=num1-num2;
	cout<<num1<<" + "<<num2<<" = "<<sum<<endl<<num1<<" - "<<num2<<" = "<<minus<<"\n"<<num1<<" / "<<num2<<" = "<<divid<<"\n"<<num1<<" * "<<num2<<" = "<<multi<<endl;
	system("pause");
	return 0;
}
	
