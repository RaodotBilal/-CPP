
//Q1
#include<iostream>
using namespace std;
main()
{
	/* cout<<"Q1\n";
	int x;
	cout<<"Let's check your value is Positive or Negative or Nutral\n";
	//taking values from user
	cin>>x;
//Logic: Values biiger then Zero are positive and lesser then Zero are Nagatives
	//Following line will check if given value is bigger then 0 or not
	if(x>0){
		cout<<"Positive\n";
	}
	//Following line will check if value is lesser then ZERO
else	if(x<0)
	{ cout<<"Negative";
	}
	//Following line will check if given value is Zero
	else if(x==0)
	{ cout<<" you input is "<<x<<" And 0 Nutral"<<endl;
	}
cout<<"\nQ2\t Let's check your given number will be odd or Even or Nither'\n";

//Q2
	int num, M;
	//Asking num's value from user
	cin>>num;
	//checking if given value is ZERO
	if(num==0)
	{ cout<<"your Number is not odd or even (Nither)\n";
//Taking modules of given value by 2
	M=num%2;
	}
	//Checking if Modules of given value by 2 is ZERO
	else if(M==0)
	{ cout<<"your number is even\n";
	}
	//checking if modules of given value is not ZERO
	else if(M!=0)
	{ cout<<"your Number is Odd\n";
	}
	


//Q3
cout<<"\nQ3\n";
	char a;
	cout<<"lets check if your given charracter is vowel or not or just a special charrecter \n";
	cin>>a;
	//checking if given Char is Vowel
	if(a=='a' || a=='A' || a=='i' || a=='I'  || a=='o'  || a=='O'  || a=='e'  || a=='E'  || a=='u'  || a=='U')
	{ cout<<"it's a vowel\n";
	}
	//checking if given char is Consonant
	else if(a=='b' || a=='B' || a=='c' || a=='C' || a=='d' || a=='D' || a=='f' || a=='F' || a=='g' || a=='G' || a=='h' || a=='H' || a=='j' || a=='J' || a=='k' || a=='K' || a=='l' || a=='L' || a=='m' || a=='M' || a=='n'  || a=='N' || a=='p' || a=='P' || a=='q' || a=='Q' || a=='r' || a=='R' || a=='s' || a=='S' || a=='t' || a=='T' || a=='y' || a=='Y' || a=='v' || a=='V' || a=='w' || a=='W' || a=='x' || a=='X' || a=='z' || a=='Z')
	{ cout<<"it's a Consonant\n";
	}
else	//checking if given value is special charracter
{
		cout<<"it's a Special Charrecter'\n";
	}





//Q5
cout<<"\nQ5\t Checking Bonus \n";
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
	cout<<"you bonus is "<<bonous-salary<<endl; */

//Q4
cout<<"\nQ4\t Checking attandace \n";
	//Asking for values from user
	int noch,noca,ap;
	cout<<"Please! input number of calsses held\n";
	cin>>noch; //noch= Number of classes helo
	cout<<"Please! input number of calsses attended\n";
	cin>>noca; //noca= Number of Classes attended
	ap=(noca*100)/noch; //taking percentage
if (noca>noch) //Making sure that noch can't be freater then noca
	{ cout<<"invalid input\n attended classes can't be more then held ones'";
return 0; //Exiting from program incase values are invalid
	}
	//if values are correct, then program will start proccessing
	cout<<" your attendance is "<<ap<<"%\n";
	 if(ap>=75)// Comparirng values with given 75% limit (Upper case)
	{ cout<<"you will be allowerd for Exam\n";
	}
	else //if Attandance is not greater then 75%
	{ cout<<"you will  not allowed for Exams";
	}

	return 00;
	}
