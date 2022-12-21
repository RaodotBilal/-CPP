#include<iostream>
using namespace std;
main()
{
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
	return 0;
}
