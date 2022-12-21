#include<iostream>
using namespace std;
main()
{
	int years, salary;
	double bonous;
	cout<<"Please! let me know your service Duration\n";
	cin>>years; //Years= serice years
	if(years>=6) //Making sure that User is legible fro the bonus
	{ cout<<"Congrats! you can legible for bonous\n";
	}
 if(years<=5) 
	{ cout<<"sorry! you are illegible for this bonous";
	return 0; //making sure that if bonus is not applicable then program will end
	}
	cout<<"please! let me know your salary\n";
	cin>>salary;//asking for salary
	bonous=salary*1.05; //Calculating net Bonus ny 5% 
	//Basic formula= given percentage must be divided by 10, after that add a whole 1 to the answer then multiply to get final results 
	// Math expression 5%= 5/10=0.5 0.5+1=1.05
	cout<<"you bonus is "<<bonous-salary<<endl;
	return 0;
	}
